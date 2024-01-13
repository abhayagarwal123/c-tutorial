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
node*buildtree(node*root)
{
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
void inorder(node*root){
//LNR
if(root==NULL){return;}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
void preorder(node*root){
//NLR
if(root==NULL){return;}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);

}
void postorder(node*root){
//LRN
if(root==NULL){return;}
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";

}

int height(node*root)
{
    //tc=n
if(root==NULL){return 0;}
int left_height=height(root->left);
int right_height=height(root->right);
int ans=max(left_height,right_height)+1;
return ans;
}

int diameter(node*root)
{
    //tc=n^2
    if(root==NULL){return 0;}
    int a=diameter(root->left);
    int b=diameter(root->right);
    int c=height(root->left)+height(root->right)+1;
    int ans=max(a,max(b,c));
    return ans;
}

bool balance(node*root)
{
//tc=n^2
//balance when left and right part are balance and diff of height is <=1
if(root==NULL){return true;}
bool left_balance=balance(root->left);
bool right_balance=balance(root->right);
bool height_diff=abs(height(root->left)-height(root->right))<=1;
if(height_diff&&left_balance &&right_balance){return true;}
else{return false;}
}


//same tree
bool identical(node*root1,node*root2)
{
if(root1==NULL&&root2==NULL){return true ;}
if(root1!=NULL&&root2==NULL){return false ;}
if(root1==NULL&&root2!=NULL){return false ;}
bool a=identical(root1->left,root2->left);
bool b=identical(root1->right,root2->right);
bool value=root1->data==root2->data;
if(a&&b&&value){
return true;}
else{return false;}
}



void longsum(node* root, int sum,int len, int& maxLen, int& maxSum)
{
    
if (root==NULL) {
 
if (maxLen < len) 
{
maxLen = len;
maxSum = sum;
} 
else if (maxLen == len && maxSum < sum)
maxSum = sum;
return;
}
 sum=sum+root->data;
// recur for left subtree
longsum(root->left, sum  ,len + 1, maxLen, maxSum);
 
// recur for right subtree
longsum(root->right, sum ,len + 1, maxLen, maxSum);
}

int maxsumroot_leaf(node* root)
{
  
if (root==NULL)
return 0;
 
int maxSum = INT_MIN, maxLen = 0;
 
longsum(root, 0, 0, maxLen, maxSum);
 
return maxSum;
}



int sumoftree(node*root){
    if (root==NULL)
    return 0;
    int sum=root->data;
    sum+=sumoftree(root->left)+sumoftree(root->right);
    return sum;
}


int main()
{
node*root=NULL;
root= buildtree(root);
/*cout<<"level order traversal"<<endl;
levelordertraversel(root);
cout<<endl;
cout<<"inorder traversal"<<endl;
inorder(root);
cout<<endl;
cout<<"preorder traversal"<<endl;
preorder(root);
cout<<endl;
cout<<"postorder traversal"<<endl;
postorder(root);
cout<<endl;*/
cout<<sumoftree(root);
}