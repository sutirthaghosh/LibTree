#include<LibTree.h>

int r2lmaxsum(TreeNode* root){
    static int sum,maxsum;
    static int leafid;
    if(root==NULL)
        return 0;
    sum+=root->id;
    if(sum>maxsum && root->left==NULL && root->right == NULL){
        maxsum=sum;
        leafid=root->id;
    }
    if(0 == maxsum && root->left==NULL && root->right == NULL){
        maxsum=sum;
        leafid=root->id;
    }
    r2lmaxsum(root->left);
    r2lmaxsum(root->right);
    sum-=root->id;
    return leafid;
}
int printleaf2rootmaxsum(TreeNode *root,int id){
    if(root==NULL)
        return 0;
    if(root->id == id){
        std::cout<<id<<" ";
        return 1;
    }
    if(printleaf2rootmaxsum(root->left,id)==1){
        std::cout<<root->id<<" ";
        return 1;
    }
    else{
        if(printleaf2rootmaxsum(root->right,id)==1){
        std::cout<<root->id<<" ";
        return 1;
        }
        return 0;
    }
}
void Tree::leaftorootmaxsum(TreeNode *root){
    
    printleaf2rootmaxsum(root,r2lmaxsum(root));
}
