N = int(input())
K = int(input())

a_1 = int(input())
D = int(input())

a = [a_1]
res = 0

for i in range(N-1):
    a.append(a[i]+D)

a.sort()
print(a)
a.reverse()
print(a)

for i in range(K):
    res += a[i]


print(res)


