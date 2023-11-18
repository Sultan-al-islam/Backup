#include<bits/stdc++.h>
using namespace std;
int main()
{
     int node, edge, start_node;
    cout << "Enter number of nodes: ";
    cin >> node;
    cout << "Enter number of edges: ";
    cin >> edge;

    
   priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
    cout << "Enter the waight & edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
         int w, b, c;
        cin >> w >> b >> c;
        pq.push({w,{b,c}});
    }
    cout<<"Graph output "<<endl;
  while (!pq.empty()) {
        pair<int, pair<int, int>> edge = pq.top();
        pq.pop();
        int weight = edge.first;
        int source_node = edge.second.first;
        int target_node = edge.second.second;

        cout << "Weight: " << weight <<" "<< source_node << " " << target_node << endl;
    }

  
} 

