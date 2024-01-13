#include <bits/stdc++.h>
using namespace std;
class Queue{
public:
int *arr;
int size;
int front;
int rear;
Queue(int size){
    this->size=size;
    arr=new int [size];
    front=0;
    rear=0;
}
void push(int d){
if(rear==size){cout<<"queue is full"<<endl;}
else{
arr[rear]=d;
rear++;}
}
void pop(){
if(front==rear){cout<<"queue is already empty"<<endl;}
else
{

front++;
if(front==rear)
{
   //to clear space
   front=0;
   rear=0;
}
   
}

}
void top(){
if(front==rear){cout<<"queue is empty"<<endl;}

   cout<<arr[front] <<endl;
}
void isempty(){
  if(rear==front){cout<<" empty"<<endl;}
  else{cout<<" not empty"<<endl;}
}
};
int main()
{
   Queue q(5) ;
q.push(2);
q.push(4);
q.push(6);
q.push(8);
q.push(9);
q.top();
q.pop();
q.pop();
q.pop();
q.top();
q.isempty();
}