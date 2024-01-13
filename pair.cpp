#include <bits/stdc++.h>
using namespace std;
  pair<int,int>p(int n){
    pair<int,int>q;
    q.first=n;
    q.second=n/2;
    return q;
  }
int main()
{

int n;
cin>>n;
 pair<int,int>q=p(n);
cout<<q.first;
}