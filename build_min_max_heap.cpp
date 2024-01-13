#include <bits/stdc++.h>
using namespace std;

/*for 1 base index left=2i
right=2i+1
and loop is  for(i=n/2;i>0;i--)*/

//below is for 0 base index

void maxheapify(int arr[], int n, int i)
{
 
    int largest = i;
 
    int left = 2*i+1 ;
 
    int right = 2*i + 2;
 
    if (left < n && arr[left] > arr[largest])
        largest = left;
 
    if (right < n && arr[right] > arr[largest])
        largest = right;
 
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        maxheapify(arr, n, largest);
    }
}
void minheapify(int arr[], int n, int i)
{
 
    int smallest = i;
 
    int left = 2*i+1 ;
 
    int right = 2*i + 2;
 
    if (left < n && arr[left] < arr[smallest])
        smallest = left;
 
    if (right < n && arr[right] < arr[smallest])
        smallest = right;
 
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
 
        minheapify(arr, n, smallest);
    }
}
int main()
{
    
int a[6]={54,53,55,52,50};int n=5;
for (int i = n / 2 - 1; i >= 0; i--)
{
   maxheapify(a,n,i);
}


for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


}