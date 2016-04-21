Q = 1

def Schet():
    global Q
    if Q > 7:
        Q = 1
    else: Q += 1
    return Q

for i in range(10):
    print(Schet())
