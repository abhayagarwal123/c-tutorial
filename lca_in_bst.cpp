/*
dono v1 v2 root se kam hai to left me aa jao
dono root se jyada hai to right me aa jao
agar ek root se jyada hai aur ek root se kam to root hi lca hoga
*/

/*node *lowest_common_ancestor(node *root, int v1,int v2) {
		if(root==NULL){return NULL;}
        if(root->data>v1&&root->data>v2){
            return lowest_common_ancestor(root->left,v1,v2);
        }
        if(root->data<v1&&root->data<v2){
           return lowest_common_ancestor(root->right,v1,v2);
        }return root;
    }
*/