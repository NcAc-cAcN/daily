word = input()
capCount = 0
lowCount = 0

for i in word:
    if i.islower():
        lowCount +=1 
    else:
        capCount +=1

if lowCount >= capCount:
    print(word.lower())
else:
    print(word.upper())