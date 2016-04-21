s = input()

num = {chr(i) for i in range(48,58)}
chars = {chr(i) for i in range(65,91)}

if (len(s) == 5) and (s[0] and s[1] in chars) and (s[2] and s[3] and s[4] in num):
    print(2)
elif (len(s) == 6) and (s[0] and s[5] and s[4] in chars) and (s[1] and s[2] and s[3] in num):
    print(1)
elif (len(s) == 6) and (s[0] and s[1] in chars) and (s[4] and s[2] and s[3] and s[5] in num):
    print(3)
elif (len(s) == 6) and (s[5] and s[4] in chars) and (s[1] and s[2] and s[3] and s[0] in num):
    print(4)
else: print(0)


