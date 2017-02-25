#include<LibTree.h>
using namespace std;
void BToDLL(TreeNode *root, TreeNode **head_ref)
{
if(root != NULL){
static TreeNode *prev=NULL;
BToDLL(root->left,head_ref);

root->left=prev;
if(prev != NULL)
prev->right=root;
prev=root;

BToDLL(root->right,head_ref);

if(*head_ref == root){
    prev->right=NULL;
    while((*head_ref)->left!=NULL)
        *head_ref = (*head_ref)->left;
}
}
}
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
   /* TreeNode *end = left_ptr(root);
    right_ptr(end,NULL);*/
   BToDLL(root,&root);
   TreeNode *temp,*prev;
   temp=root;
    while(temp!=NULL){
        prev=temp;
        cout<<temp->id<<" ";
        temp=temp->right;
    }
    temp=prev;
     while(temp!=NULL){
        cout<<temp->id<<" ";
        temp=temp->left;
    }
}

