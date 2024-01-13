/*

//done using 2 pointer one at end and one at start to reduce tc from n^2 to n
//only for sorted array or vector

void twosum(Node*root,vector<int>&v){
    if(root==NULL){return;}
    twosum(root->left,v);
    v.push_back(root->data);
    twosum(root->right,v);
}
    int isPairPresent( Node *root, int target)
    {
    vector<int>v;
    twosum(root,v);
   int i=0;int j=v.size()-1;int sum=0;
    while(i!=j){
        sum=v[i]+v[j];
        if(sum==k){return 1;}
        if(sum>k){
            j--;
        }
        if(sum<k){
            i++;
        }
    }
   return 0;
    }

    */