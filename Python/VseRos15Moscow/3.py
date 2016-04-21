m = int(input())
d_n = int(input())
Q = d_n - 1

def Schet():
    global Q
    if Q == 7:
        Q = 1
    else: Q += 1
    return Q


d = 30
k = 0

a = []

for i in range(m):
    a.append([])
    for j in range(d):
        a[i].append(0)

for i in range(m):
    for j in range(d):
        a[i][j] = Schet()

for i in range(m):
    if a[i][12] == 5:
        k += 1

for i in range(m):
    print(a[i])

print(k)
