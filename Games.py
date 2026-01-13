testCases = int(input())

arr1= []
arr2= []

res = 0

for i in range(testCases):
    c1,c2 = input().split()
    arr1.append(c1)
    arr2.append(c2)

for i in arr1:
    res += arr2.count(i)

print(res)