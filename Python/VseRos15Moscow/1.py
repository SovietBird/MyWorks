n = int(input())
m = int(input())

a = []
k = 0

for i in range(n):
    a.append([])
    for j in range(m):
        a[i].append(1)

for i in range(n):
    for j in range(m):
        if (i % 2 != 0):
            if (j % 2 != 0): a[i][j] = 1
            else: a[i][j] = 0
        elif (j % 2 == 0): a[i][j] = 1
        else: a[i][j] = 0

for i in range(n):
    for j in range(m):
        if a[i][j] == 1:
            k += 1

for i in range(n):
    print(a[i])

print(k)
