import sys
from collections import deque

input = sys.stdin.readline
print = sys.stdout.write

n, m, v = map(int, input().split())
graph = [[] for _ in range(n+1)]
for _ in range(m):
    node1, node2 = map(int, input().rstrip().split())
    # 인접 그래프
    graph[node1].append(node2)
    graph[node2].append(node1)



visit = [False for _ in range(n+1)]
ans = []

for now_graph in graph:
    now_graph.sort()

def DFS(node):
    ans.append(node)
    visit[node] = True
    for conn_node in graph[node]:
        if visit[conn_node]:
            continue
        else:
            DFS(conn_node)


def BFS(node):
    d = deque()
    visit[node] = True
    ans.append(node)
    d.append(node)
    while d:
        now_node = d.popleft()
        for conn_node in graph[now_node]:
            if visit[conn_node]:
                continue
            else:
                visit[conn_node] = True
                ans.append(conn_node)
                d.append(conn_node)


DFS(v)
for i in ans:
    print(str(i)+" ")
print("\n")

visit = [False for _ in range(n+1)]
ans = []

BFS(v)
for i in ans:
    print(str(i)+" ")