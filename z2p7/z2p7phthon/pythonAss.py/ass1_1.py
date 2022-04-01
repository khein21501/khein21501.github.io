from operator import truediv


numlist = []
numlist = []
sum = 0
max_num = 0
mini_num = 0
avg = 0

while True:
    num = (float (input('Enter Number')))
    if num<0:
        break
    sum += num
    numlist.append(num)
if len(numlist)>0:
    avg = sum / len(numlist)
    max_num = max(numlist)
    mini_num = min(numlist)

print('Sum  :',sum)
print('Max Number :',max_num)
print('Mini Num',mini_num)
print('Average : ',avg)
    