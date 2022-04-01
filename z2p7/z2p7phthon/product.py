class Product:
    def __init__(self):
        print('Instant Creates')
    def __call__(self,a,b):
        print(a*b)
ans = Product()
ans(3,4)