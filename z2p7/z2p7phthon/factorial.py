def factorial(n):
    """
    Computes n!
    Returns the factorial of n.
    """
    if n == 0 :
        return 1
    else:
        return n * factorial(n-1) # recursive
def main():
    print('0!', factorial(0))
    print('1!',factorial(1))
    print('3!',factorial(3))
    print('6!',factorial(6))
main()
    