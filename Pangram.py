n = int(input())
string = input()

if len(set(string.lower())) == 26:
    print("YES")
else:
    print("NO")

