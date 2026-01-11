inp1 = input()
if  inp1 == "{}":
    print(0)
else:
    print(len(set(inp1[1:len(inp1)-1].split(", "))))