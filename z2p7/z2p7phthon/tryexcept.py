import sys
try:
    C = float(sys.argv[1])
except IndexError:
    print('You forget to provide an argument after file name')
except ValueError:
    sys.exit(1)
F = (9/5)*C+32
print('%s C is %s F'%(C,F))
