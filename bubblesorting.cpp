#include<bits./stdc++.h>
using namespace std;
int sort(int arr[],int n){
int count=1;while (count<n)
{
    for (int i = 0; i < n-count; i++)
    {
       if(arr[i]>arr[i+1]){int temp=arr[i];        //count increment will be in while loop not for loop
       arr[i]=arr[i+1];arr[i+1]=temp;}
    }
    count++;
}


}
int search(int arr[],int n,int key){int s=0;int e=n-1;int m=s-(s-e)/2;
while (s<=e)
{
   if(arr[m]==key){return m;}
   if(arr[m]>key){e=m-1;}
   else{s=m+1;}
   m=(s+e)/2;
}

return -1;

}
int main(){
    int arr[10]={3,45,12,78,36,15,8,25,97,123};
    int key;
    cin>>key;
    sort(arr,10);for (int i = 0; i < 10; i++)
    {
       cout<<arr[i]<<endl;
    }
    int a=search(arr,10,key);
cout<<a<<endl;
}