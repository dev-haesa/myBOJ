import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
arr = [0 for _ in range(n)]
for i in range(n):
    arr[i] = int(input().rstrip())

score = [[0 for _ in range(3)] for _ in range(n)]

# basecase
score[0][0] = 0
score[0][1] = arr[0]
score[0][2] = 0

for i in range(1, n):
    score[i][0] = max(score[i-1][1], score[i-1][2])
    score[i][1] = score[i-1][0]+arr[i]
    score[i][2] = score[i-1][1]+arr[i]

print(str(max(score[n-1][1], score[n-1][2])))