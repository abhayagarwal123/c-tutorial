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

if(root==NULL){
    root=new node(data);return root;
    }
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
void levelordertraversel(node*root){
queue<node*>q;
//poora tree queue me le liya aur end me null laga diya
q.push(root);
q.push(NULL);
while (!q.empty())
{
//temp ko root node pr point karvaya 
//aur phir loop lagake aage ke element ko bhi point karvaya
node*temp=q.front();
q.pop();
//if last element is null
if(temp==NULL)
{
//old is completly traversed
cout<<endl;
 
if(!q.empty())
{
    //queue still has some child node
    q.push(NULL);
}
}
//if last element has data
else
{
    cout<<temp->data<<" ";
if(temp->left)
{
    //if temp ke left me data hai to queue me daal do
    q.push(temp->left);
}
if(temp->right)
{
    //if temp ke right me data hai to queue me daal do
    q.push(temp->right);
}
}
}
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
void inorder(node*root){
    if(root==NULL){return;}
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL){return;}cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL){return;}
    postorder(root->left);
    
    postorder(root->right);cout<<root->data<<" ";
}
node* minimum(node*root){
     if(root==NULL){return NULL;}
    node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}





node* deleteNode(node*root,int data){
    if (root == NULL)
        return root;
if (data < root->data)
        root->left = deleteNode(root->left, data);
 
    
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
 
  //if root-> data=data
    else {
        // no child
        if (root->left == NULL and root->right == NULL)
            return NULL;
 
        // one right child 
        else if (root->left == NULL) {
             node* temp = root->right;
            delete(root);
            return temp;
        }
        //one left child
        else if (root->right == NULL) {
             node* temp = root->left;
            delete(root);
            return temp;
        }
        
        node* temp = minimum(root->right);
 
        root->data = temp->data;
 
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
        



 node *lowest_common_ancestor(node *root, int v1,int v2) {
		if(root==NULL){return NULL;}
        if(root->data>v1&&root->data>v2){
            return lowest_common_ancestor(root->left,v1,v2);
        }
        if(root->data<v1&&root->data<v2){
           return lowest_common_ancestor(root->right,v1,v2);
        }return root;
    }


bool isabst(node*root,int min,int max){
if(root==NULL){return true;}
if(root->data>min&&root->data<max){
bool left=isabst(root->left,min,root->data);
bool right=isabst(root->right,root->data,max);
return left&&right;}
return false;
}

bool isbst(node*root){
return isabst(root,INT_MIN,INT_MAX);
}
void kth(node*root,vector<int>&v){
    if(root==NULL){return;}
    kth(root->left,v);
    v.push_back(root->data);
    kth(root->right,v);
}


int kthminimum(node*root,int k){
    vector<int>v;
if(root->left==NULL&&root->right==NULL&&k>1){return -1;}
if(k>v.size()){return -1;}
kth(root,v);
cout<<v.at(k-1);
}


int main()
{
node*root=NULL;
cout<<"enter data "<<endl;
takeinput(root);

}