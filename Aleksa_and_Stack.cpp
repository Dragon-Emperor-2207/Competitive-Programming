# cook your dish here
test_cases = int(input())
for test in range(test_cases):
    n = int(input())
    li = [1, 3]
    temp = 5
    index = 2
    while(len(li)<n):
        li.append(li[index-1]+2)
        index+=1
    for i in li:
        print(i, end=' ')
    print()