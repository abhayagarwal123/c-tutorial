#include <bits/stdc++.h>
using namespace std;
/*
template ka kaam hai general banana 
jaha par int hai waha T lagana hai
*/
template<typename T>
class graph{

public:
unordered_map<T,list<T>>adj;
void addedge(T u,T v,bool direction){
    //dir==0(undirected)
    //dir==1(directed)

    adj[u].push_back(v);
    if(direction==0){
        adj[v].push_back(u);
    }
}
void print(){
    for(auto i:adj){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j<<" ";
        }cout<<endl;
    }
}


};
int main()
{
   int n;
   cout<<"enter the number of nodes" <<endl;
   cin>>n;
   int m;
   cout<<"enter the number of edges" <<endl;
   cin>>m;
   graph <int>g;
   for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    //undirected
    g.addedge(u,v,0);
}
g.print();
}