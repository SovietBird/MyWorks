def per(k):
    if k == 5:
        print()
    else:
        k += 1
        for i in range(5):
            a[k] = i
            per(k)

a = [1,2,3,2,1]
b = []


b = a
b.reverse()

if a == b:
    print('Палиндром')
else:
    print('no')


print(b)