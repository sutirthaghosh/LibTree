#include <LibTree.h>

int Tree::k_distance_from_leaf(TreeNode *root,int id,int k){
    if(root==NULL){
        return -1;
    }
    if(id==root->id)
        return 0;
    int x =k_distance_from_leaf(root->left,id,k);
        
    if(x!=-1){
        if(x+1==k)
            std::cout<<root->id<<" ";
        print_k_distance_from_root(root->right,k-x-2);
    
        return x+1;
    }
     
    x=k_distance_from_leaf(root->right,id,k);
    if(x!=-1){
        if(x+1==k)
            std::cout<<root->id<<" ";
        print_k_distance_from_root(root->left,k-x-2);
        return x+1;
    }
    return -1;
}
