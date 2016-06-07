#include <LibTree.h>

TreeNode* Tree::deepest_Leaf(TreeNode *root,int k){
    static TreeNode* d_Leaf=NULL;
    static int l=0;
    if(root==NULL)
        return NULL;
    deepest_Leaf(root->left,k+1);
    deepest_Leaf(root->right,k+1);
    if(k>l){
        l=k;
        d_Leaf=root;
    }
    return d_Leaf;
}
