from fractions import gcd

a = 1500000
b = 838085
max = 0

while a > 1000000:
    if gcd(a,b) > max:
        max = gcd(a,b)
        print(a)
    a -= 1

print(max)




