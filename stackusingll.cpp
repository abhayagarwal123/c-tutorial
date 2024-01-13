#include <iostream>
#include <math.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    
};
class Stacks{
    public: 
    node* head;
    
    Stacks(){head=NULL;}
void push( int d)
{
    // if empty list
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
    }

    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void pop(){
node*temp=head->next;
temp->prev=NULL;
head->next=NULL;
head=temp;
cout<<head->data;
}};
int main(){
    Stacks s;
    s.push(5);
     s.push(4);
      s.push(3);
       s.push(2);
       s.pop();
       s.pop();
       s.pop();

}