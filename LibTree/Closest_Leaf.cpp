#include <LibTree.h>
#include <climits>
int belowleaves(TreeNode *root){
    if(root==NULL)
        return INT_MAX-1;
    
    if(root->left==NULL && root->right==NULL)
        return 0;
    
    return (std::min(belowleaves(root->left),belowleaves(root->right))+1);
}
int Tree::Closest_Leaf(TreeNode * root,int id){
    int temp;
    if(root == NULL)
        return -1;
    
    if(root->id == id)
        return belowleaves(root);
        
    temp=Closest_Leaf(root->left,id);
    if(temp!=-1){
        temp=std::min(temp,belowleaves(root->right)+1);
        return temp;
    }
    
    temp=Closest_Leaf(root->right,id);
    if(temp!=-1){
        temp=std::min(temp,belowleaves(root->left)+1);
        return temp;
    }
    
    return -1;
}
