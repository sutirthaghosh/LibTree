#include <LibTree.h>
/*program to print the tree provided it is threaded
 */

TreeNode* getleft(TreeNode *root){
    if(root == NULL)
        return NULL;
    while(root->left!=NULL)
        root=root->left;
    return root;
}

void Tree::print_Threaded(TreeNode* root){
    TreeNode* temp = getleft(root);
    while(temp!=NULL){
        std::cout<<temp->id<<" ";
        if(temp->rightThreaded==true)
            temp=temp->right;
        else
            temp=getleft(temp->right);
    }
}
