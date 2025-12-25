x=int(input())

if(x>5):
    print(x//5 + (1 if x%5 != 0 else 0))
else:
    print(1)