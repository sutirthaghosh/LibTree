#include<LibTree.h>
int height(TreeNode *root)
{
    if (root == NULL)
        return 1;
    return (std::max(height(root->left), height(root->right)) + 1);
}
int diameter(TreeNode *root, int *dia)
{
    if (root == NULL)
        return 0;
    int left = diameter(root->left, dia);
    int right = diameter(root->right, dia);
    *dia = std::max(left + right + 1, *dia);
    return std::max(left, right) + 1;
}
int Tree::Diameter(TreeNode *root)
{
    /*if(root==NULL)
        return 0;
    int lower_subtree = std::max(Diameter(root->left),Diameter(root->right));
    int inclusing_self= height(root->left)+ height(root->right) + 1;
    return (std::max(lower_subtree,inclusing_self));*/
    int x = 0;
    diameter(root, &x);
    return x;
}

