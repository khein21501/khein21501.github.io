# ask use a function and run with x value
import code


formula = input('Enter a function including x')
codes= """
        def f(x):
        return %s"""%formula
        
exec(codes)
x= int (input('Enter value if x'))
print(f(x))