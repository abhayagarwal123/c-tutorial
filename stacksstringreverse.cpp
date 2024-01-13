#include <bits/stdc++.h>
using namespace std;

int main()
{
    
stack<char>s;
string a;
cin>>a;
char ch;int i=0;
while(a[i]!='\0'){
ch=a[i];
s.push(ch);
i++;
}
int k=0;
while(!s.empty()){

a[k]=s.top();
s.pop();
k++;

}
cout<<a;

}