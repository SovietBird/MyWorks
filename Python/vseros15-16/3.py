N = int(input())
a = [i*0 for i in range(7)]
k = 0


while N > 0:
    if N - 500 >= 0:
        N = N - 500
        a[0] += 1
    elif N - 100 >= 0:
        N = N - 100
        a[1] += 1
    elif N - 50 >= 0:
        N = N - 50
        a[2] += 1
    elif N - 10 >= 0:
        N = N - 10
        a[3] += 1
    elif N - 5 >= 0:
        N = N - 5
        a[4] += 1
    elif N - 2 >= 0:
        N = N - 2
        a[5] += 1
    elif N - 1 >= 0:
        N = N - 1
        a[6] += 1

for i in range(7):
    k += a[i]

print(k)

for i in range(7):
    if i == 0: print(a[i], 500)
    elif i == 1: print(a[i], 100)
    elif i == 2: print(a[i], 50)
    elif i == 3: print(a[i], 10)
    elif i == 4: print(a[i], 5)
    elif i == 5: print(a[i], 2)
    elif i == 6: print(a[i], 1)
