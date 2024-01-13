
#include<bits/stdc++.h>

using namespace std;
int getmax(int num[],int n){int minw=INT_MAX;

 

 for (int i = 0; i <n ; i++)
{
    minw=min(minw,num[i]);

}return minw;
}
int main()
{ 
int size;
cin>>size;
int num[100];for (int i = 0; i <size ; i++)
{
cin>>num[i];

}cout<<getmax(num,size);

}

 

/* for (int i = 0; i <3 ; i++)
{int maxw=INT_MIN;
    maxw=max(maxw,arr[i]);
 return max;
}*/

