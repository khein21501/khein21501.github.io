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
    infile = open('expenselist.json','r')
    lines  =infile.readlines()
    infile.close()
    myjson = json.loads(lines[0])
    
    myjson['expenselist'].append(expense)
    
    file = open('expenselist.json','w')
    file.write(json.dumps(myjson))
    file.close()

def show_expense():
    file = open('expenselist.json','r')
    lines = file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    print('Date\tTitle\tAmount')
    for expense in myjson['expenselist']:
        print('%s\t%s\t%s'%(expense['date'],expense['title'],expense['amount']))

def sum_expense():
    file = open('expenselist.json','r')
    lines = file.readlines()
    file.close()
    myjson = json.loads(lines[0])
    sum = 0 
    for expense in myjson['expenelist']:
        sum += expense['amount']
   
def main():
    print('Place Choice')
    print('1 : Add New Expense')
    print('2 : SHow List')
    print('3 : Totle of Expense')
    print('4 : Delete')
    ans = int(input('Enter Your Choice :'))
    if ans == 1:
        input_expense()
        show_expense()
    elif ans == 2:
        show_expense()
    elif ans == 3:
        sum_expense()
      

main()