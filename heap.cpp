#include <bits/stdc++.h>
using namespace std;
//max heap
//1 base indexing
class heap{
public:
int a[100];
int size=0;
void insert(int data){
    // tc=O(log n)
    size+=1;
    int index=size;
    a[index]=data;
    while(index>1){
        int parent=index/2;
        if(a[parent]<a[index]){
            swap(a[parent],a[index]);
            index=parent;
        }
        else{return;}
    }
}

void print(){
    for(int i=1;i<=size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void deleteheap(){
//deleting root node
// tc=O(log n)
if(size==0){cout<<"empty";return;}
a[1]=a[size];
size--;
int i=1;
while(i<size){
    int leftindex=2*i;
    int rightindex=2*i+1;
    if(leftindex < size && a[i] < a[leftindex] && a[rightindex]<a[leftindex])
    {
        swap(a[i], a[leftindex]);
        i=leftindex;
    }
    if(rightindex < size && a[i] < a[rightindex] && a[leftindex]<a[rightindex]){
        swap(a[i], a[rightindex]);
        i=rightindex;
    }
     else{return;}
}

}
};

void heapify(int a[], int n, int i)
{
 //O(log n)
    int largest = i;
 
    int left = 2*i ;
 
    int right = 2*i + 1;
 
    if (left <= n && a[left] > a[largest])
        largest = left;
 
    if (right <= n && a[right] > a[largest])
        largest = right;
 
    if (largest != i) {
        swap(a[i], a[largest]);
 
        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n)
{
 
   
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
 
    for (int i = n - 1; i > 0; i--) {
 
        swap(a[0], a[i]);
 
        heapify(a, i, 0);
    }
}
int main()
{
    
int a[6]={-1,54,53,55,52,50};int n=5;
for (int i = n/2; i >0; i--)
{
   heapsort(a,n);
}
for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
}

}