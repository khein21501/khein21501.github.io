entry = 0 
sum = 0
print("Enter number to sum, negative number ends lists : ")
while entry >=0:
    entry = int(input("Enter NUmber : "))
    if entry >= 0:
        sum +=entry
print('Sum is : ',sum)