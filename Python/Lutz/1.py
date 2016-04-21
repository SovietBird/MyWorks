import random

a =[]
n = 10

for x in range(n):
    a.append(random.randint(0,100))

print(a)

a.sort()

print(a)