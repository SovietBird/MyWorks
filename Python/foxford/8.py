D = []
n = 20
k = 0

for i in range(n):
    D.append(i+1)

for i in range(n):
    for j in range(n):
        if ((D[i]+D[j]) % 6) == 0:
            k += 1

print(k)
