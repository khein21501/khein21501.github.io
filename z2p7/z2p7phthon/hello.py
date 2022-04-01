from dis import dis
from turtle import width


print("Hello World")
age = 34
distance = 100.5
print(age)
print(distance)
print(type(age),type(distance))
length =12
width=20
area = length*width
print("Aera is",area)
str = "Hello world!"
print(str)
print(str[0:])
print(str[0:-1])
print(str[0:5])
print(str[6:-1])
print(str*3)
print(str+"Zero to pro")

list=['abcd',324,3.25,'John']
tinylist=[123,'john']
print(list)
print(list[-2])
print(list[3:])
print(list[3:-1])
print(list+tinylist)
print(tinylist*2)
tinylist[0]=456
print(tinylist)
tuple=('abc',78,'Gorge',24.5)
print(tuple[0:-2])
print(tuple[0])
dict={'name':'Mg Mg'
        ,'age':23,
        "City":"Yangon"
        }
dict["Phone"]="0912412325"
print(dict)
print(dict['City'])
print(dict['Phone'])
print(dict.keys())
print(dict.values())
dict['hobbies']={1:'PHP',2:'Python',3:'Js'}
print[dict]
