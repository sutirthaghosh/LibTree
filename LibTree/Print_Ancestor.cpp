#include<LibTree.h>

int Tree::Print_Ancestor(TreeNode* root,int id){
    if(root==NULL)
        return 0;
    if(root->id == id)
        return 1;
    if(Print_Ancestor(root->left,id)==1){
        std::cout<<root->id<<",";
        return 1;
    }
    else{
        if(Print_Ancestor(root->right,id)==1){
            std::cout<<root->id<<",";
            return 1;
        }
        else
            return 0;
    }
    
    
}
