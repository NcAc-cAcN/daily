inps = input().split()
rows, cols = int(inps[0]), int(inps[1])

matrix = []
cnt =0 

for row in range(rows):
        if row % 2 == 0:
            matrix.append("#"*cols)
        else:
            if cnt %2==0:
                matrix.append(f"{"."*(cols-1)}#")
            else:
                matrix.append(f"#{"."*(cols-1)}")
            cnt+=1

for i in matrix:
    print(i)