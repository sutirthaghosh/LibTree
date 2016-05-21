#include <LibTree.h>
using namespace std;

TreeNode* Tree::Lcs_General(TreeNode* root, int id1,int id2){
    TreeNode *t1;
    TreeNode *t2;
    if(root==NULL)
        return NULL;
    if(root->id==id1 || root->id==id2)
        return root;
    t1=Lcs_General(root->left,id1,id2);
    t2=Lcs_General(root->right,id1,id2);
    if(t1 != NULL && t2 != NULL){
        return root;
    }
    else{ 
        if(t1) return t1; if(t2) return t2;
    }
    return NULL;
    
}

