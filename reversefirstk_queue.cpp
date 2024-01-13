#include <bits/stdc++.h>
using namespace std;

int main()
{
queue<int>q;
stack<int>s;
int n,k,value;
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>value;
q.push(value);
}

while(!q.empty()){
s.push(q.front());
q.pop();

}
while(!s.empty()){
q.push(s.top());
s.pop();
}
for (int i = 0; i <n-k ; i++)
{
   s.push(q.front());
q.pop();
}
for (int i = 0; i <n-k ; i++)
{
   q.push(s.top());
s.pop();
}

while(!q.empty()){
cout<<q.front();
q.pop();

}
}
