#include<LibTree.h>

int Tree::sum_tree(TreeNode *root){
    int temp,t1=0,t2=0;
        if(root->left==NULL && root->right==NULL){
            temp=root->id;
            root->id=0;
            return temp; 
        }
    if(root->left!=NULL){
        t1=sum_tree(root->left);
        t1+=root->left->id;
    }
    if(root->right!=NULL){
        t2=sum_tree(root->right);
        t2+=root->right->id;
    }
    temp=root->id;
    root->id=t1+t2;
    return temp;
}
