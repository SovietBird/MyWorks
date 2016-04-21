#Счетчик
def result(s,l,r,a):

    k = 0

    for i in range(l-1, r):
        if s[i] in a:
            k += 1


    return k


#Вычисление последовательности
def posled(a, n, k):

    arr = []

    for i in range(n):
        for j in range(k):
            arr.append(a[j]*(i+1))

    s = ''

    return s.join(arr)

P = int(input())
K = int(input())

#Последовательность для создания списка букв,которые Вася выучил
alf = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
#Список букв, которые написаны на учебнике
a =[]
#Список буквы, которые выучил Вася
s_alf = alf[:P]

for i in range(K):
    a.append(input())

L = int(input())
R = int(input())

#Строка, написанная Васей
str = posled(s_alf,R, P)

res = result(str, L, R, a)

print(res)
