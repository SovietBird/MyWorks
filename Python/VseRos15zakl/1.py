def Schet(a,b,n):

    k = 0

    for i in range(n):
        if (a[i] == b[i]): k += 1

    return k

n = int(input())

a = []
k = 0
K = 0

for i in range(n):
    a.append([int(input()) for j in range(3)])

for i in range(n):
    for j in range(n):
        if Schet(a[i],a[j],3) == 1:
            K += 1

for i in range(n):
    print(a[i])

print(int(K/2))



