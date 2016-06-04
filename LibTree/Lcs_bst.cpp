#include <LibTree.h>
using namespace std;

TreeNode* Tree::Lcs_bst(TreeNode *root,int id1,int id2){
    if(root==NULL)
        return NULL;
    if(id1>root->id && id2>root->id)
       return Lcs_bst(root->right,id1,id2);
    else
        if(id1<root->id && id2<root->id)
           return Lcs_bst(root->left,id1,id2);
        else
            return root;
}
