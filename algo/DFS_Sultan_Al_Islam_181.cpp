#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;
    cout << "Enter number of nodes: ";
    cin >> node;
    cout << "Enter number of edges: ";
    cin >> edge;

    bool visit[node + 1];
    vector<int> adj[node + 1];

    cout << "Enter the edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    for (int i = 0; i <= node; i++)
    {
        visit[i] = false;
    }

    stack<int> st;
    st.push(start_node);
    visit[start_node] = true;

    cout << "DFS result: " << endl;
    while (!st.empty())
    {
        int current_node = st.top();
        st.pop();
        cout << current_node << " ";

        for (int i = 0; i < adj[current_node].size(); i++)
        {
            int next_node = adj[current_node][i];
            if (!visit[next_node])
            {
                st.push(next_node);
                visit[next_node] = true;
            }
        }
    }

    return 0;
}
//------------- Input-----------
// Enter number of nodes: 4
// Enter number of edges: 6
// Enter the edges:
// 1 2
// 1 3
// 1 4
// 2 3
// 3 4
// 4 2
// Enter the starting node: 1
//------------- Output-----------
// DFS result:
// 1 2 3 4