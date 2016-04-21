import sys

def delit(x):
    sum = 0

    i = 1

    while i <= x:
        if (x % i) == 0:
            sum += i
        i += 1

    return sum

n = int(input())

if (n < 2) or (n > 327667):
    sys.exit()

max = 0
a = []

for i in range(n+1):
    k = delit(i)
    if max < k:
        max = k

print(k)