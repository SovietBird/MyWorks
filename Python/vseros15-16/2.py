M = int(input())
a = [int(input()) for i in range(M)]
k = 0

for i in range(M):
    if (a[i] % 2 != 0) and ((i+1) % 2 == 0):
        k += 1

print(k)
