/*
given a vector of vector
 vector<vector<int>>edges

unordered_map<int,list<int>>adj;
for(int i=0;i<edges.size();i++)
{
    int u=edges[i].first;
    int v=edges[i].second;

    //for directional
    adj[u].push_back(v);


    //for non directional
    adj[u].push_back(v);
    adj[v].push_back(u);
}
*/