/*#include<iostream>
using namespace std;




int getsum(int arr[], int n) {int sum=0; for(int i=0;i<n;i++){sum=sum+arr[i];}
        cout<<sum;
    } 
    int main(){int arr[5]={1,2,3,4,5};
    getsum(arr,5);}*/
   
   
   
   
   
#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l;
int n;
cin>>n;int value;
for (int i = 1; i <= n; i++)
{
    cin>>value;
    l.push_back(value);
}

l.sort();
for(int i:l){cout<< i <<endl;}
}


//concatenate two vector   a.insert(a.end(), b.begin(), b.end());