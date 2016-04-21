import math

L = int(input())

R = L/(2*math.pi)

l = math.floor(R)

res = 1

print(R)

if L == 0:
    print (0)
else:
    for i in range(l):
        res += 2

    res *= 4

    print(res)