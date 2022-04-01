def factorial(n):
    product = 1
    while n:
        product *=n
        n-=1
    return product
def main():
    print('0!',factorial(0))
    print('1!',factorial(1))
    print('2!',factorial(3))
    print("100!",factorial(100))
main()