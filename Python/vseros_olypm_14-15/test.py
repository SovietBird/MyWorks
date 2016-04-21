# def FN(a):
#     if a == 0: return 0
#     F = 1
#     for i in range(1,a+1):
#         F *= i
#     return F
#
# n = int(input())
#
# s = 1
#
# for i in range(1,n+1):
#     s += i/FN(i)
#
# print(s)

a = []

k = 0

def Pal(n):
    m = 0
    while n>0:
        m = m*10 + n%10
        n = n//10
    return m

n = int(input())

for i in range(1,1000000):
    if (k == n) & (k % 10 == 0):
        print(a[9])
        break
    elif k == n:
        print(a[(k % 10)-1])
        break
    elif len(a) == 10: a.clear()
    if i == Pal(i):
        a.append(i)
        k += 1








