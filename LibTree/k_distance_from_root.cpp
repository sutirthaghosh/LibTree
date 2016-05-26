#include <LibTree.h>

void Tree::print_k_distance_from_root(TreeNode* root,int k){
    if(root==NULL || k < 0)
        return;
    if(k==0)
        std::cout<<root->id<<" ";
    print_k_distance_from_root(root->left,k-1);
    print_k_distance_from_root(root->right,k-1);
}
