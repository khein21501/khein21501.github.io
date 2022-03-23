numlist = []
sum = 0 
max_num = 0
i = 0 
while i < 1:
    num = numlist.append(int(input('Enter Number : ')))
    if numlist[i]>0:
        i = 0
    else:
        for i in range(0,len(numlist)):
            sum = sum + numlist[i]
        average = float(sum/len(numlist))
    
        print("the sum is :",sum)
        print("Average :",average)
        for i in range (0,len(numlist)):
            if max_num < numlist[i]:
                max_num = numlist[i]
        print('Max number is :',max_num)
        exit()