numlist = []
sum = 0
max_num = 0
mini_num = 0
userNum = int(input('Enter a number :'))
i = 0 
while i < userNum:
    print('-----Enter Num ',i+1,'-----')
    num = numlist.append(float (input('Enter Number')))
    i += 1

for i in range(0,len(numlist)):
    sum = sum + numlist[i]
average = float(sum/userNum)
    

if len(numlist)>0:
    avg = sum / len(numlist)
    max_num = max(numlist)
    mini_num = min(numlist)

print("the sum is :",sum)
print("Average :",average)
print('Max number is :',max_num)
print('Mini num :',mini_num)
   
    

    
