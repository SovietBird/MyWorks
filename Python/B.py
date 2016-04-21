def find(str):
    string = ""
    ans = ""
    s = ""
    m = 0
    answer = ''

    for i in range(len(str)):
        string = str[i:]
        if (len(string) % 2 == 0):
            n = len(string) // 2

            if (string[0:n] == string[n:]):
                ans = str[0:i]
                s = str[i - 1:]
    if (len(ans) == 1):
        for i in range(len(str)):
            if (str[0:i] == str[i - 1:]):
                answer = str[0:i]
    else:
        if (ans != ''):
            m = s.find(ans)
            answer = s[m:]
    return answer

STRING = input()

ANSWER = find(STRING)

if (ANSWER):
    print("YES")
    print(ANSWER)
else:
    print("NO")



