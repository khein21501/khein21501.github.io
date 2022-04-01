from ast import If
from tkinter import Place


infile = open('Oxfors.dat','r')
lines=infile.readline().split('\\r\\n')
print(lines)
print(lines[0])
print(lines[1])
temp_info=lines[7:]
data={}
data['place']=place
data['location']= location
data['data']={}
#print(data)
print(temp_info[0])
for temp in temp_info:
    columns = temp.split()
    year = columns[0]
    month = columns[1]
    if columns[-1]=='Provision':
        del columns[-1]
    for i in range(2,len(columns)):
        if columns[i][-1]=='*':
            i=i[:-1]
        elif i=='---':
            i = 'None'
    print(columns)