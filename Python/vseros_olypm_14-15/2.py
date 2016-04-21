def FN(n):
    f = 1
    for i in range(n):
        f = f/(i+1)
    return f

n = int(input())

print(FN(n))
