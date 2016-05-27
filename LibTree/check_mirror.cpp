#include <LibTree.h>

bool Tree::is_mirror(TreeNode *left,TreeNode *right){
    if(left == NULL && right != NULL)
        return false;
    if(left != NULL && right == NULL)
        return false;
    if(left == NULL && right == NULL)
        return true;
    return (is_mirror(left->left,right->right)&&is_mirror(left->right,right->left));
}
