import sys

input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
arr = list(map(int, input().split()))

dp = [0]*n
dp[0] = 1

for i in range(1, n):
    max_count = 0
    for j in range(i):
        if arr[j]<arr[i]:
            max_count = max(max_count, dp[j])
    dp[i] = max_count+1


print(str(max(dp)))
