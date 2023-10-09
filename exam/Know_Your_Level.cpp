#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> shops;

void bfs(int a, int b)
{
    queue<pair<int, int>> q;
    q.push({a, 0});
    visited[a] = true;

    while (!q.empty())
    {
        int shop = q.front().first;
        int Level = q.front().second;
        q.pop();

        if (Level == b)
        {
            shops.push_back(shop);
        }

        for (int neighbor : adj[shop])
        {
            if (visited[neighbor]==false)
            {
                q.push({neighbor, Level + 1});
                visited[neighbor] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e;i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    int l;
    cin >> l;

    bfs(0, l);

    if (shops.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (int shop : shops)
        {
            cout << shop << " ";
        }
        cout << endl;
    }

    return 0;
}