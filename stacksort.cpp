#include <bits/stdc++.h>
using namespace std;

int main()
{
vector<int>v;
stack<char>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);

while(!s.empty()){
v.push_back(s.top());
s.pop();

}
for(int i:v){cout<<i;}
sort(v.begin(),v.end());cout<<endl;
for(int i:v){cout<<i;}
}