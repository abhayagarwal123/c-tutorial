#include <bits/stdc++.h>
using namespace std;

int main()
{
    
stack<int>s;
int val;int m=INT_MAX;
for (int i = 0; i < 5; i++)
{
   cin>>val;
   s.push(val);
   m=min(m,s.top());
}


cout<<m;

}