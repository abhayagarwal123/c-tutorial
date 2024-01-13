/*
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
*/

// another approach 
/*traverse inorder and store value in vector 
make vector in main function and call by reference and compare in main fumction
send by reference like this  :void isbst(node*root,vector<int>&v)*/