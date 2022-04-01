class Example:
    def __init__(self):
        print('Instance Created!')
    def __call__(self):
        print('Call from object')
e=Example()
e()