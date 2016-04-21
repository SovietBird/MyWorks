K1 = 0
K2 = 0

def schet(a):
    global K1
    global K2

    if (a[0] == a[1]): pass
    elif (a[0] == 'paper' and a[1] == 'rock'): K1 += 1
    elif (a[0] == 'rock' and a[1] == 'paper'): K2 += 1
    elif (a[0] == 'scissors' and a[1] == 'rock'): K2 +=1
    elif (a[0] == 'rock' and a[1] == 'scissors'): K1 +=1
    elif (a[0] == 'scissors' and a[1] == 'paper'): K1 += 1
    elif (a[0] == 'papre' and a[1] == 'scissors'): K2 += 1




F_in = open('input.txt','r')
F_out = open('output.txt', 'w')

N = int(F_in.readline())
a =[]

for i in range(N):
    a.clear()
    for i in range(2):
        a.append(F_in.readline().rstrip())
    schet(a)

if (K1 == K2): print('draw')
elif (K1 > K2): print('first')
else: print('second')

F_out.close()