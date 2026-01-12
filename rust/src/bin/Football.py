field = input()

zero_count = 0
one_count = 0

zero_count_max = 0
one_count_max = 0

for i in field:
    one_count_max = max(one_count_max, one_count)
    zero_count_max = max(zero_count_max, zero_count)

    if i == "0":
        zero_count += 1
        one_count = 0
    else:
        one_count += 1
        zero_count = 0

    one_count_max = max(one_count_max, one_count)
    zero_count_max = max(zero_count_max, zero_count)

if (zero_count_max >= 7 or one_count_max >= 7):
    print("YES")
else:
    print("NO")
