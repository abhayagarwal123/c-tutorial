#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0)return 1;
    return n*factorial(n-1);
}
int fact(int n,int r)
{
return factorial(n)/(factorial(r)*factorial(n-r));
}
int main() 
{
  cout<<fact(5,2);

}
