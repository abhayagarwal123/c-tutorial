#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
int *arr;
int size;
int front;
int rear;
Queue(int size){
   this-> size=size;
    arr=new int [size];
    front=-1;
    rear=-1;
}
void push(int d){

if ((front == 0 && rear == size-1) ||
   (rear == (front-1)%(size-1)))
{
    cout<<"queue is full"<<endl;
}
else if(front==-1){
// inserting first element
    front=0;
    rear=0;
    arr[rear]=d;
}

else if(rear==size-1&&front!=0){
    //rear last me chale jae to vapas 0 par aa jae
    rear=0;
    arr[rear]=d;
}
else{
    rear++;
    arr[rear]=d;
}
}
void pop(){
if(front==-1){
    cout<<"queue is empty"<<endl;
}
else if(front==rear){
    //only one element is present 
    front=rear=-1;
}
else if(front==size-1){
    //reached last toh firse 0 pe le aao
    front=0;
}
else{
    front++;
}
}
void top(){
cout<<arr[front]<<endl;;
}

};

int main()
{
    
 Queue q(5);
q.push(2);
q.push(4);
q.push(6);
q.push(8);
q.push(9);
q.top();
q.pop();
q.push(9);
q.top();
q.pop();
q.top();
q.pop();
q.top();
q.pop();q.top();
q.pop();q.top();
q.pop();


}