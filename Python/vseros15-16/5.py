Q = 0
q = 0

#Вoзвращает False если в массиве осталась одна цифра
def find(b):
    global a
    global NN

    res = False

    for i in range(NN):
        if (a[i] != b):
            res = True
    return res


def schetchik():
    global q
    if q == M: q = 1
    else: q += 1
    return q

def schet():
    global Q
    if Q == N: Q=1
    else: Q+=1
    return Q

def del_i(a,b):

    global NN

    for i in range(NN):
        if a[i] == b:
            a[i] = 0

def prov(a,j):
    global NN
    res = 0

    for i in range(j,NN):
        if (a[i] == 0): continue
        elif (schetchik() == 1) and (find(a[i])):
            del_i(a,a[i])
        else:
            for j in range(NN):
                if a[j] != 0:
                    res = a[i]


    return res


N = int(input())
M = int(input())
# L = int(input())
NN = N*(M+5)

for i in range(N):
    a = [schet() for i in range(NN)]
    print(i, a[i], prov(a,i))




print(a)
