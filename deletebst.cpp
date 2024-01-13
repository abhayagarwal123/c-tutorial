/*node* deleteNode(node*root,int data){
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
}*/