#include <bits/stdc++.h>
using namespace std;
void bottom(stack<int>&s,int x){
if(s.empty()){
    s.push(x);return ;
}
    int num=s.top();

    s.pop();
bottom(s,x);
s.push(num);
}

void reverse(stack<int>&s){
if(s.empty()){
   return ;
}
 int num=s.top();
 s.pop();
reverse(s);
bottom(s,num);

}
int main()
{
    
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);


reverse(s);
while (!s.empty())
{
    cout<<s.top();s.pop();
}

}