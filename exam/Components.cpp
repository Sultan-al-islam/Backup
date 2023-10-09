#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
bool visited[MAXN] = {false};
set<int> s;

void bfs(int start, int level) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        int shop = q.front().first;
        int shopLevel = q.front().second;
        q.pop();

        if (shopLevel == level) {
            s.insert(shop);
        }

        for (int neighbor : adj[shop]) {
            if (!visited[neighbor]) {
                q.push({neighbor, shopLevel + 1});
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int N, E;
    cin >> N >> E;

    for (int i = 0; i < E; ++i) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    int L;
    cin >> L;

    bfs(0, L);

    if (s.empty()) {
        cout << -1 << endl;
    } else {
        for (int shop : s) {
            cout << shop << " ";
        }
        cout << endl;
    }

    return 0;
}