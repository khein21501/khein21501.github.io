from itertools import product


size = int(input("enter table size:  "))
print
for row in range(1,size+1):
    print('{0:3}'.format(row),end='|')
print()
    for colum in range(1, size+1):
        product = row * colum
        print('{0:4}'.format(product),end='')
print()