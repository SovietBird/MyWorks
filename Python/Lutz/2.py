# def minmax(test, *args):
#     res = args[0]
#     for arg in args[1:]:
#         if test(arg, res):
#             res = arg
#     return res
#
# def lessthan(x, y): return x < y
# def grtrthan(x, y): return x > y
#
# print(minmax(grtrthan, 4, 2, 1, 5, 6, 3))

# def tester(start):
#     state = start
#     def nested(label):
#         nonlocal state
#         print(label, state)
#         state += 1
#     return nested
#
# F = tester(0)
#
# print(F('spam'))
# print(F('spam'))
#
# F = tester(4)
#
# print(F('spam'))
# print(F('spam'))

# def maker(N):
#     def action(X):
#         return X ** N
#     return action
#
# f = maker(2)
#
# print(f(3))

# def func():
#     x = 4
#     action = (lambda n, x=x: x**n)
#     return action
#
# x = func()
# print(x(4))

# def makeAcrions():
#     acts = []
#     for i in range(5):
#         acts.append(lambda x, i=i: i ** x)
#     return acts
#
# acts = makeAcrions()
# print(acts[2](3))


arr = [1,2,3,4,5]
a = tuple(arr)

print(a, arr)