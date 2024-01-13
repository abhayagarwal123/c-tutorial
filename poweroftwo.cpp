#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){

bool a;
if(n==0||n<0){a=0;return 0;}
if(n==1){a=1;return 1;}
if(n%2!=0)  {a=0;return 0;}  
isPowerOfTwo(n/2);
return a;
}
int main()
{

 cout<<isPowerOfTwo(5);
//can make it for any integer

}