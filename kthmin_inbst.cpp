/*
void kth(node*root,vector<int>&v){
    if(root==NULL){return;}
    kth(root->left,v);
    v.push_back(root->data);
    kth(root->right,v);
}


int minimum(node*root,int k){
    vector<int>v;
if(root->left==NULL&&root->right==NULL&&k>1){return -1;}
if(k>v.size()){return -1;}
kth(root,v);
cout<<v.at(k-1);
}

*/