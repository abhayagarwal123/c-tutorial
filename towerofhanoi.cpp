#include<bits/stdc++.h>
using namespace std;



void tower(int n,char a,char c,char b){
if(n==0){return;}
tower(n-1,a,b,c);
cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
tower(n-1,b,c,a);

}

int main()
{
int n;
cin>>n;
tower(n,'a','c','b');




}







