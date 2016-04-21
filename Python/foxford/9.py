import random

x = int(input())
y = int(input())

pole = []

k = 0

for i in range(x+1):
    pole.append([])
    for j in range(y+1):
        pole[i].append(0)

for i in range(x):
    for j in range(y):
        if (pole[i][j] == 0):
            pole[i][j] = 2
            pole[i+1][j] = 1
            pole[i+1][j+1] = 1
            pole[i][j+1] = 1
            k += 1


for i in range(x):
    print(pole[i])

print(k)