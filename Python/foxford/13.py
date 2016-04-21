Q = 0
E = 0

def schetchik():
    global E
    if E == 26:
        E = 0
    E += 1
    return E

def schet():
    global Q
    if Q == 26:
        Q = 0
    Q += 1
    return Q

def zap(a):
    global Q
    global E

    for i in range(x):
        w = schet()
        a[i] = alf[w-1]
    Q = 0

x = 10
y = 10

a = []
alf = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

for i in range(x):
    a.append([])
    for j in range(y):
        a[i].append(0)

for i in range(x):
    zap(a[i])


for i in range(x):
    print(a[i])