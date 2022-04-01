from math import sqrt
def is_prime(n):
    trial_factor = 2
    root = sqrt(n)

    while trial_factor <= root:
        if n%trial_factor == 0:
            return False
        trial_factor +=1
    return True
print('this is prime? ', is_prime(3241324312949234324132432142343242134325543543543253245342532453425234552))
print('25 is prime', is_prime(25))