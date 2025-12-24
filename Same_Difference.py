t = int(input())
    
for _ in range(t):
    n = int(input())
    string = input()
    print(n - string.count(string[-1]))