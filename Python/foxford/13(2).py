Q = 0

def schet():
    global Q

    if Q == 26:
        Q = 1
    else:
        Q += 1

    return Q

alf = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

a = []

x = 857
y = 857

k = 0

i1 = 105
j1 = 106

for i in range(x):
     a.append([])
     for j in range(y):
         a[i].append(0)

for i in range(x):
    for j in range(y):
        w = schet()-1
        a[i][j] = alf[w]

while i1 < 834:
    while j1 < 845:
        if a[i1][j1] == 'z':
            k += 1

        j1 += 1
    i1 += 1

print(k)











