#include<LibTree.h>
using namespace std;

TreeNode* left_ptr(TreeNode *root){
    static TreeNode* p=NULL;
    if(root!=NULL){
        left_ptr(root->left);
        root->left=p;
        p=root;
        left_ptr(root->right);
    }
    return p;
}
void right_ptr(TreeNode *root,TreeNode *parent){
    
    if(root->left!=NULL)
        right_ptr(root->left,root);
    root->right=parent;
}
void Tree::tree2dll(TreeNode *root){
    TreeNode *end = left_ptr(root);
    right_ptr(end,NULL);
    while(end!=NULL){
        cout<<end->id<<" ";
        end=end->left;
    }
}
