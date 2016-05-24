#include<LibTree.h>

int leaftoleafmaxsum(TreeNode *root,int &maxsum){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->id;
    }
    int x= leaftoleafmaxsum(root->left,maxsum);
    int y= leaftoleafmaxsum(root->right,maxsum);
    
    int z= std::max(x,y);
    
    if(x+y+root->id > maxsum){
        maxsum =x+y+root->id;
        std::cout<<root->id<<" ";
    }
    return z+root->id;
}
void Tree::l2lmaxsum(TreeNode *root){
    int maxsum=0;
    leaftoleafmaxsum(root,maxsum);
    std::cout<<maxsum;
    
}
