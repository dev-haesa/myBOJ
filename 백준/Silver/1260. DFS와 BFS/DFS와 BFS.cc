#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int s, const auto& adj, auto& visited, auto& res);
void bfs(int s, const auto& adj, auto& visited, auto& res);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, v; // n은 node의 수, m은 간선의 수, v는 시작 정점
    cin >> n >> m >> v;

    vector<vector<int>> adj(n+1);
    // 간선 정보 입력 받기, m번 입력받아야 함에 유의할 것
    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    // 인접 그래프 오름차순 정렬
    for (int i=1; i<n+1; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    
    vector<bool> visited(n+1, false);
    vector<int> r1;
    vector<int> r2;

    dfs(v, adj, visited, r1);
    for (int x:r1) cout << x << " "; cout << "\n";
    
    // 원소 초기화
    fill(visited.begin(), visited.end(), false);

    
    bfs(v, adj, visited, r2);
    for (int x:r2) cout << x << " "; cout << "\n";
    
    
    return 0;
}

void dfs(int s, const auto& adj, auto& visited, auto& res) {
    visited[s] = true;
    res.push_back(s);
    for (int n:adj[s]) {
        if (visited[n] == true) continue;
        else {
            dfs(n, adj, visited, res);
        }
    }
}

void bfs(int s, const auto& adj, auto& visited, auto& res) {
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        res.push_back(cur);
        for (int nxt:adj[cur]){ // 현제 노드에 연결된, 다음으로 검사할 노드 추가
            if (visited[nxt]) continue; // 큐에 추가 전 방문 여부 검사
            else { // 방문 전이면 방문 체크 후 추가(중복 큐 갱신을 막기 위해)
                visited[nxt] = true;
                q.push(nxt);
            }
        }

    }

}