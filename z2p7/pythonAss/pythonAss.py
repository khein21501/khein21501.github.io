from audioop import avg


numlist = []
sum = 0
max_num = 0
userNum = int(input('Enter a number :'))
i = 0 
while i < userNum:
    print('-----Enter Num ',i+1,'-----')
    num = numlist.append(int (input('Enter Number')))
    i += 1

for i in range(0,len(numlist)):
    sum = sum + numlist[i]
average = float(sum/userNum)
    
print("the sum is :",sum)
print("Average :",average)
for i in range (0,len(numlist)):
    if max_num < numlist[i]:
       max_num = numlist[i]
print('Max number is :',max_num)
