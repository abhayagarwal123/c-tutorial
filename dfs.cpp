#include <bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[], vector<bool> &vis, int source)
{

    vis[source] = true;
    cout << source << " ";
    for (auto i : adj[source]){
         if (!vis[i]){
             DFS(adj, vis, i);
         }
          
    }
       
}

int main()
{

    vector<int> adj[5];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[2].push_back(4);

    vector<bool> visited(5, false);
    DFS(adj, visited, 0);

    return 0;
}
