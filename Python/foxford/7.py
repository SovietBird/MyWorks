number_const = 123484
number = 123484
i = 123484

def IsPrime(n):

    d = 2

    while n % d != 0:

        d += 1

    return d == n

while number < 300000:
    number += 3
    if (((number_const - number) % 3) == 0) and (IsPrime(number)):
        print(number)
        break


print(IsPrime(123487))




