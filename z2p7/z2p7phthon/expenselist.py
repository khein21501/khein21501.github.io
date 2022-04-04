from datetime import date
from mailbox import linesep
from msilib.schema import IniFile
from time import time
import json
from turtle import title

class Expense:
    def __init__(self,date,title,amount):
        self.date = date
        self.title = title
        self.amount = amount

def input_expense():
    date = input('Enter Date :')
    title = input('Enter title :')
    amount = float(input ('Enter Amount :'))
    expense = Expense(date,title,amount)
    add_expense(expense.__dict__)

def add_expense(expense):
    infile = open('expense.json','r')
    lines  =infile.readlines()
    infile.close()
    myjson = json.loads(lines[0])
    print(type(myjson['expense']))
    myjson['expense'].append(expense)
    print(myjson)
    file = open('expense.json','w')
    file.write(json.dumps(myjson))
    file.close()

def show_expense():
    file = open('expense.json','r')
    lines = file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    for expense in myjson['expense']:
        print('%s\t%s\t%s'%(expense['date'],expense['title'],expense['amount']))


   
def main():
    input_expense()
    show_expense()
main()