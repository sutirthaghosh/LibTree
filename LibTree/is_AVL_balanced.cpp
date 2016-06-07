#include <LibTree.h>

int Tree::is_AVL_balanced(TreeNode *root){
    static int is_balanced=0;
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int left_height=is_AVL_balanced(root->left);
    int right_height=is_AVL_balanced(root->right);
    is_balanced =std::abs(left_height-right_height);
    std::cout<<root->id<<"balance factor="<<is_balanced<<std::endl;
    return (std::max(left_height,right_height)+1);
}
