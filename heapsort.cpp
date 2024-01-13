#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
 //O(log n)
 //0 base indexing
    int largest = i;
 
    int left = 2*i+1 ;
 
    int right = 2*i + 2;
 
    if (left < n && arr[left] > arr[largest])
        largest = left;
 
    if (right < n && arr[right] > arr[largest])
        largest = right;
 
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
 //O(nlogn)
   
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    for (int i = n - 1; i > 0; i--) {
 
        swap(arr[0], arr[i]);
 
        heapify(arr, i, 0);
    }
}
int main()
{
    
int a[10]={1,3,4,5,3,2,6,7};
heapsort(a,8);
for(int i=0;i<8;i++){
    cout<<a[i]<<" ";
}


}