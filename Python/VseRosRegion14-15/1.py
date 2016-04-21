import time

t = time.time()

F_in = open('hall.in', 'r')
F_out = open('hall.out', 'w')

arr = F_in.readline().split()

A = int(arr[0])
B = int(arr[1])
C = int(arr[2])
D = int(arr[3])

K = 0
k = 0


S = {i for i in range(A,B+1)}
P = {i for i in range(C,D+1)}

n = max(A,B,C,D)

for i in range(1,n):
    for j in range(1,n):
        if (i == j) and ((i*j) in S) and (2*(i+j) in P):
            k += 1
        elif ((i*j) in S) and (2*(i+j) in P):
            K +=1

print(time.time() - t)

F_out.write(str(K // 2 + k))
F_out.close()
