#include <bits/stdc++.h>
using namespace std;

class node{
    public:
int data;
node*left;
node*right;
node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}

};
node*insert_tree(node*root,int data)
{
    //if root is null then create root and then do like binary search

if(root==NULL){root=new node(data);return root;}
if(data>root->data)
{
   root->right= insert_tree(root->right,data);
}
else
{ 
   root->left= insert_tree(root->left,data);
}
return root;
}

void takeinput(node*&root){
    int d;//root ka data
    cin>>d;
    while(d!=-1)
    {
       root= insert_tree(root,d);
        cin>>d;
    }
}
void search(node*root,int data){
//tc=O(logn) sc=O(height)
//if we do by while loop space complexity will be constant
if(root==NULL){cout<<"no";}
if(root->data==data){cout<<"yes";}
if(data>root->data){search(root->right,data);}
else{search(root->left,data);}
}
int main()
{
    node*root=NULL;
cout<<"enter data "<<endl;
takeinput(root);
search(root,3);
search(root,65);
}