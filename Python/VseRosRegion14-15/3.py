def kv(arr,n):
    s = 0
    for i in range(n):
        s += arr[i]*arr[i]
    return s

def rasdel(a):
    b = a // 2
    a -= b
    return a,b

def abc(arr,e,v):
    if e == 1:
        if v == 0:
            arr[v+1] += arr[v]
            arr.pop(v)
            return arr
        elif v == len(arr)-1:
            arr[v-1] += arr[v]
            arr.pop(v)
            return arr
        else:
            if (arr[v] % 2 == 0):
                b = arr[v] / 2
                arr[v-1] += b
                arr[v+1] += b
                arr.pop(v)
                return arr
            else:
                cor = rasdel(arr[v])
                arr[v-1] += cor[0]
                arr[v+1] += cor[1]
                arr.pop(v)
                return arr
    else:
        if v==len(arr)-1:
            q,w = rasdel(arr[v])
            arr.pop(v)
            arr.append(q)
            arr.append(w)
            return arr
        elif v==0:
            q,w = rasdel(arr[v])
            arr.reverse()
            arr.pop(len(arr)-1)
            arr.append(w)
            arr.append(q)
            arr.reverse()
            return arr
        else:
            q,w = rasdel(arr[v])
            j = 0
            a = []
            while j < len(arr):
                if j == v:
                    a.append(q)
                    a.append(w)
                    j += 1
                else:
                    a.append(arr[j])
                    j += 1
            return a

F_in = open('river.in', 'r')
F_out = open('river.out', 'w')

arr = F_in.readline().split()
n = int(arr[0])
p = int(arr[1])
arr = F_in.readline().split()
a = [int(arr[i]) for i in range(n)]
k = int(F_in.readline())
b = []
res = []
res.append(kv(a,n))
for i in range(k):
    arr = F_in.readline().rstrip().split()
    b.append([])
    for j in range(1):
        b[i].append(int(arr[0]))
        b[i].append(int(arr[1]))

print(a, end=' ')
print(kv(a,len(a)))
c = abc(a,b[0][0],b[0][1]-1)
print(c, end=' ')
u = kv(a,len(a))
print(u)
res.append(u)


for i in range(1,k):
    c = abc(c,b[i][0],b[i][1]-1)
    print(c, end=' ')
    r = kv(c,len(c))
    res.append(r)
    print(r)

for i in range(len(res)):
    F_out.write(str(res[i]) + '\n')

F_out.close()
