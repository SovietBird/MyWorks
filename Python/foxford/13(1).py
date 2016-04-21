Q = 0

def schet():
    global Q

    if Q == 26:
        Q = 0

    Q += 1
    return Q

x = 50
y = 50

a = []
alf = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

# for i in range(x):
#     a.append([])
#     for j in range(y):
#         a[i].append(0)

for i in range(x):
    for j in range(y):
        w = schet()
        a[i][j].insert(j,alf[w-1])

