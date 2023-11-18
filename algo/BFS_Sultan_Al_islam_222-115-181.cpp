#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;
    cout << "Enter number of nodes: ";
    cin >> node;
    cout << "Enter number of edges: ";
    cin >> edge;

    bool visit[node + 1];      // An array to keep track of visited nodes
    vector<int> adj[node + 1]; // An array of vectors to represent the adjacency list of the graph

    cout << "Enter the edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b); // Add b to the adjacency list of a
        adj[b].push_back(a); // Add a to the adjacency list of b (since it's an undirected graph)
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    for (int i = 0; i <= node; i++)
        visit[i] = false; // Initialize the visit array to mark all nodes as unvisited

    queue<int> q;             // Create a queue for BFS
    q.push(start_node);       // Push the starting node to the queue
    visit[start_node] = true; // Mark the starting node as visited

    cout << "BFS result: " << endl;
    while (!q.empty())
    {
        int fr = q.front(); // Get the front element of the queue
        q.pop();            // Remove the front element from the queue
        cout << fr << endl; // Print the current node

        for (int i = 0; i < adj[fr].size(); i++)
        {
            if (!visit[adj[fr][i]]) // Check if the neighbor has not been visited
            {
                visit[adj[fr][i]] = true; // Mark the neighbor as visited
                q.push(adj[fr][i]);       // Push the neighbor to the queue for further exploration
            }
        }
    }
}
