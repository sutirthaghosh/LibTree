#include<LibTree.h>

int Tree::hight_of_a_node(TreeNode *root,int id){
    static int hight;
    int x;
    if(root==NULL)
        return -1;
    hight+=1;
    if(root->id == id){
        return hight;
    }
    else{
    x=hight_of_a_node(root->left,id);
        if(x!=-1){hight-=1; return x;}
    x=hight_of_a_node(root->right,id);
        if(x!=-1){hight-=1;return x;}
    hight-=1;
    return -1;
    }
}
