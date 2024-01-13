#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
  int *arr;
  int size;
  int top;
  Stack(int size)
  {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element)
  {
//if space available or not
if((size-top)>1)
{
top++;
arr[top]=element;

}
else{cout<<"stack overflow"<<endl;}
  }
  void pop()
  {

//check if atleast one element is present
if(top>=0)
{
top--;
}
else{cout<<"stack underflow"<<endl;}
  }

  int peek()
  {
    if(top>=0&&top<size)
  {
return arr[top];
  }
  else{cout<<"stack is empty"<<endl;}return -1;
  }

  bool isempty()
  {
if(top==-1)
{
return true;
}
else
{
  return false;
}
  }
    };

int main()
{
Stack s(5);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
if(s.isempty()){
  cout<<"empty"<<endl;
}
else{cout<<"not empty"<<endl;}
}