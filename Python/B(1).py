s = input()
str = ''
ans = False

for i in range(len(s)):
    if (s[0:i] == s[i - 1:]):
        ans = True
        str = s[0:i]

if (ans):
    print("YES")
    print(str)
else:
    print("NO")
s = input()