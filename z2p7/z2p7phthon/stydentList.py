# ask_student_information
# save in file
# show student list
# delete student info from list
# CRUD => create,read,update,delete
# rollNo,Name,Address,Email,Phone
import sys
import json
from operator import index
class Student:
    def __init__(self,rollNo,name,address,email,phone):
        self.rollNo=rollNo
        self.name=name
        self.address=address
        self.email=email
        self.phone=phone
def ask_student_info():
    rollNo=input('Enter RollNo: ')
    name=input('Enter Name: ')
    address=input('Enter Address: ')
    email=input('Enter email: ')
    phone=input('ENter Phone: ')
    student=Student(rollNo,name,address,email,phone)
    add_student(student.__dict__)
    
def add_student(student):
    #1 open json file and read
    infile = open('studentlist.json','r')
    lines = infile.readlines()
    infile.close()
    #2 convert string to json
    myjson=json.loads(lines[0])
    print(type(myjson['studentlist']))
    myjson['studentlist'].append(student)   #add one student into studentList List
    print(myjson)
    #3 add one student into student list
    #4 convert studentlist Json to string and write to file
    file = open('studentlist.json','w')
    file.write(json.dumps(myjson))  #json to string
    file.close()

def show_student_list():
    file = open('studentlist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    print('Roll No\t Name\t Address\t Email\t\tPhone')
    for student in myjson['studentlist']:
        #print('%s\t%s\t%s\t%s\t%s'%(student.rollNo,student.name.student.address))
        print('%s\t%s\t%s\t%s\t%s'%(student['rollNo'],student['name'],student['address'],student['email'],student['phone']))
def delete_student(rollNo):
    file = open('studentlist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    index = 0
    found = False
    for student in myjson['studentlist']:
        if(student['rollNo']==rollNo):
            found = True
            break
        else:
            index += 1
    if(found):
        del myjson['studentlist'][index] #delete one student based on index and found status
        file = open('studentlist.json','w')
        file.write(json.dumps(myjson))  #json to string
        file.close()
        print('One Student deleted')
    else:
        print('Roll Number not found')
def search_student(rollNo):
    file = open('studentlist.json','r')
    lines = file.readlines()
    file.close()
    myjson = json.loads(lines[0])
    index = 0 
    print('Roll No\t Name\t Address\t Email\t\tPhone')
    for student in myjson['studentlist']:
        if(student['rollNo'])==rollNo:
            print('%s\t%s\t%s\t%s\t%s'%(student['rollNo'],student['name'],student['address'],student['email'],student['phone']))
        else:
            index +=1



    
            

def main():
    print('Please choice :')
    print('1: Add New student')
    print('2 Show student list')
    print('3 Delete one student')
    print('4 Exit From program')
    print('5 Search with ID')
    ans = int(input('Enter Your Choice :'))
    if ans ==1:
        ask_student_info()
        show_student_list()
    elif ans ==2:
        show_student_list()
    elif ans==3:
        show_student_list()
        rollNo = input('Enter Roll No: ')
        delete_student(rollNo)
        show_student_list()
    elif ans == 5:
        rollNo = input('Enter Roll No: ')
        search_student(rollNo)
    else:
        print('Terminating From Program ......!')
        sys.exit(1)
main()