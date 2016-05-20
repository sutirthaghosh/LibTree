#include<LibTree.h>
/*
 * two cases :
 * 1. All the nodes below the given node.
 * 2. All the nodes above the given node.
 */
using namespace std;
void belownodes(TreeNode *root,int distance){
    if(root==NULL || distance < 0)
        return;
    if(distance==0){
        cout<<root->id<<" ";
    }
    else{
        belownodes(root->left,distance-1);
        belownodes(root->right,distance-1);
    }
}

int Tree::kdistance(TreeNode* root, int id,int k){
    if(root==NULL)
        return -1;
    if(root->id == id){
        belownodes(root,k);
        return 0;
        }
    int distance_from_node = kdistance(root->left,id,k);
    if(distance_from_node != -1){
        if(distance_from_node+1 == k)
            cout<<root->id<<",, ";
        else
            belownodes(root->right,k-distance_from_node-2);
        
        return distance_from_node+1;        
    }
    
    distance_from_node = kdistance(root->right,id,k);
    if(distance_from_node != -1){
        if(distance_from_node+1 == k)
            cout<<root->id<<",, ";
        else
            belownodes(root->left,k-distance_from_node-2);
        
        return distance_from_node+1;        
    }
   // cout<<"reached";
    return -1;
}
