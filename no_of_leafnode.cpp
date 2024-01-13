#include <bits/stdc++.h>
using namespace std;
class node
{
public:
int data;
node*right;
node*left;
node(int data){
    this->data=data;
    this->right=NULL;
    this->left=NULL;
}
};
node*buildtree(node*root){
int data;
cout<<"enter data "<<endl;
cin>>data;
root=new node(data);
//-1 is considered as null
if(data==-1){return NULL;}
cout<<"enter data at left of "<<data<<endl;
root->left=buildtree(root->left);
cout<<"enter data at right of "<<data<<endl;
root->right=buildtree(root->right);

return root;
}
void go_to(node*root,int &count){
if(root==NULL){return;}
go_to(root->left,count);
if(root->left==NULL&&root->right==NULL){count++;}
go_to(root->right,count);
}

void countleaf(node*root){
int count =0;
go_to(root,count);
cout<<count;

}
int main(){

    node*root =NULL;
    countleaf(root);
}