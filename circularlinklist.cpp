#include<bits/stdc++.h>

using namespace std;
class node{
public:
int data;
node*next;
node(int data){
this->data=data;
this->next=NULL;

}


};
//compare with element if present add new node
void insert(node*&tail,int element,int d){
//empty list
if(tail==NULL){
node*newnode=new node(d);
tail=newnode;    //make tail
newnode->next=newnode;  //make it circular
}

else{
    //not empty
node*current=tail;
//finding element
while(current->data!=element){
current=current->next;

}
node*temp=new node(d);
//save address
temp->next=current->next;  
current->next=temp;  
}

}
void print(node*&tail){
node*temp=tail;
//while cant do for empty list so use do while


do{cout<<tail->data<<" ";
tail=tail->next;

}while(tail!=temp);
cout<<endl;


}void deletion(node*&tail,int value)
{
//empty list
if(tail==NULL){
    cout<<"list is already empty";
}
//non empty
else{
node*prev=tail;
node*current=prev->next;
while (current->data!=value)
{//increase both by one
     prev= current;
      current = current->next;
}

prev->next=current->next;
//for 1 node ll
if(current==prev){
tail=NULL;
}
if(tail==current){tail=prev;}
current->next=NULL;
delete current;
}
}

int main(){
node*tail=NULL;
//empty list
insert(tail,1,3); //element not matter as it is null previously
print(tail);
insert(tail,3,4);
print(tail);
insert(tail,4,14);
print(tail);
insert(tail,3,24);
print(tail);
deletion(tail,4);
print(tail);
insert(tail,3,24);
print(tail);

}