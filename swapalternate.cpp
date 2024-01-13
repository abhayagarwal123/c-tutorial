#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v={1,2,3,4,5,6,7};

for(int i=0;i<v.size();i=i+2)
{
if((i+1)<v.size()){swap(v[i],v[i+1]);}
}
for(auto i:v){cout<<i;}
}