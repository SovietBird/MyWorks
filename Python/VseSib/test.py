import math

def IsPal(a):
    b = 0
    a1 = a


    while a1 != 0:
        print(b)
        b = math.fmod(a1,10) + b*10
        a = a/10

    if b == a: return True
    else: return False

a = int(input())
print(a % 10)
a = a /10
print(a % 10)
a = a /10
print(a % 10)
a = a /10