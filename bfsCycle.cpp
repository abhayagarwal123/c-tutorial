#include <bits/stdc++.h>
using namespace std;

bool BFS(vector<int> adj[], vector<int> &vis, int source)
{

    queue<pair<int, int>> q;
    q.push({source, -1});
    vis[source] = 1;
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, node});
            }
            else if (parent != it)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    vector<int> adj[5];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    vector<int> vis(5, 0);
    cout << BFS(adj, vis, 0);

    // for connected component , add the below code
    // for(int i=0;i<5;i++){
    //     if(!vis[i]){
    //         if(BFS(adj,vis,i)){
    //             return true;
    //         }
    //     }
    //     return false;
    // }

    return 0;
}
