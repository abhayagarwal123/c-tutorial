#include <bits/stdc++.h>
using namespace std;

int main()
{
queue<int>q1;
queue<int>q2;
queue<int>q3;
int n,value;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>value;
q1.push(value);
}
for (int i = 0; i <n/2; i++)
{
   q2.push(q1.front());
   q1.pop();
}
for(int i=0;i<n/2;i++)
{
q3.push(q2.front());
q3.push(q1.front());
q1.pop();
q2.pop();
}
while(!q3.empty())
{
cout<<q3.front()<<" ";
q3.pop();
}
}