#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int start,int size){
  vector<int>vis(size,0);
  queue<int>q;
  q.push(start);
  vis[start]=1;
  while(!q.empty()){
    int node=q.front();
    cout<<node<<" ";
    q.pop();
    for(auto it:adj[node]){
        if(!vis[it]){
            vis[it]=1;
            q.push(it);
        }
    }
  }
}

int main()
{
 vector<int>adj[5];
 adj[0].push_back(1);
 adj[0].push_back(2);
 adj[0].push_back(3);
 adj[2].push_back(4);
 bfs(adj,0,5);

    return 0;
}