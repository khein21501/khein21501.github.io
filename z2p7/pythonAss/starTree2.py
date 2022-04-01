num = 3
for i in range(1,num+1):
    for j in range(i,num):
        print(end='  ')
    for k in range(1, i+1):
        print('*',end=' ')
    print()
for i in range(num,0,-1):
    for j in range(i,num+1):
        print(end='  ')
    for k in range(1,i):
        print('*',end=' ')
    print()


