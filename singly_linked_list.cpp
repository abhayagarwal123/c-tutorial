#include<iostream>
#include<math.h>
using namespace std;
class node{
public:
int data;
node*next;
node(){
    data=0;
    next=NULL;
}
node(int data){
this->data=data;
this->next=NULL;



}
};
void insertathead(node*&head,int d){
node*temp=new node(d);
temp->next=head;
head=temp;

}

void insertattail(node*&tail,int d){
node*temp=new node(d);
tail->next=temp;
tail=temp;


}

void print(node*&head){
node*temp=head;
while (temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}}


void insertatmiddle(node*&tail,node*&head,int position,int d){
if(position==1){insertathead(head,d);
return;
}
node*temp=head;
int count=1;
while (count<position-1)
{
    temp=temp->next;
    count++;
}

if (temp->next==NULL){
insertattail(tail,d);
return;
}
node*nodetoinsert=new node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;

}

void deletenode(node*&head,int position){
if(position==1){
node*temp=head;
head=head->next;
temp->next=NULL;
delete temp;
}

else{
node*current=head;
node*previous=NULL;
int count =1;
while (count<position)
{
   previous=current;
   current=current->next;
   count++;
}

previous->next=current->next;
current->next=NULL;
delete current;

}


}


int main()
{
    node*n1=new node(10);
    node*head=n1;
    node*tail=n1;
    insertathead(head,12);
    insertathead(head,15);
    insertathead(head,18);
    insertattail(tail,20);
    insertatmiddle(tail,head,3,45);
   deletenode(head,3);
   print(head);
   
   
    

    
}

