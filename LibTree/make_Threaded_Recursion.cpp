#include <LibTree.h>

/*The idea is to convert out binary tree into a threaded binary tree
 * Please visit this link http://www.geeksforgeeks.org/convert-binary-tree-threaded-binary-tree/
 * They have done it using <queue> we are doing it using a inorder traversal and returning the address of the right pointer that is use TreeNode**
 */

TreeNode* Tree::make_Threaded_Recursion(TreeNode *root){
    TreeNode* temp;
    if(root->left!=NULL){
        temp = make_Threaded_Recursion(root->left);
        (temp)->right=root;
        (temp)->rightThreaded=true;
    }
    
    if(root->right!=NULL)
        temp=make_Threaded_Recursion(root->right);
    if(root->right==NULL)
        return (root);
    return temp;
}
