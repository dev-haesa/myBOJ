import sys

input = sys.stdin.readline
print = sys.stdout.write

n, m = map(int, input().split())
arr = list(map(int, input().split()))

dp = [0]*(n+1)
dp[0] = arr[0]
for x in range(1,n):
    dp[x] = dp[x-1] + arr[x]

for _ in range(m):
    i, j = map(int, input().split())
    print(str(dp[j-1]-dp[i-2])+"\n")