x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())

a = []

# for y in range(y1):
#     a.append([])
#     for x in range(x1):
#         a[y].append(0)
#
# for i in range(y1):
#     print(a[y])

if x2 > x1:
    print('E'*(x2-x1), end='')
else: print('W'*(x1-x2), end='')

if y2 > y1:
    print('N'*(y2-y1), end='')
else: print('S'*(y1-y2), end='')