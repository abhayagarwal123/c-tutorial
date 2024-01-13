#include <bits/stdc++.h>
using namespace std;

int main()
{
    
vector<int>a;
vector<int>b; 
a={1,2,3,4,5};
b={2,3,4,5,6};
a.insert(a.end(), b.begin(), b.end());
for(int i:a){cout<<i;}
}