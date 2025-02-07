import sys
input = sys.stdin.readline

a = [False for _ in range(31)]
b = [int(input()) for _ in range(28)]

for i in b:
    a[i] = True

for i in range(1, 31):
    if not a[i]:
        print(i)