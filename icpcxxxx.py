t = int(input())

for _ in range(t):
    n, K = map(int, input().split())
    K = input()
    flag = 1
    player = 0
    for i in K:
        if i == "U":
            player += flag
        elif i == "S":
            player += 2 * flag
        else:
            flag *= -1
            player += flag

        if player == n:
            player = 0
        elif player == n+1:
            player = 1
        elif player == -1:
            player = n-1
        elif player == -2:
            player = n-2

    print(player+1)