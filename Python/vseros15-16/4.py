def rasklad(a):
    arr = []

    while a > 0:
        arr.append(a % 10)
        a = a // 10
    return arr

N = int(input())

while N != 153:
    a = rasklad(N)
    N = 0
    for i in range(len(a)):
        N += a[i]**3
    print(N)


