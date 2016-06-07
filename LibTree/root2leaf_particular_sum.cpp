#include <LibTree.h>

int Tree::root2leaf_particular_sum(TreeNode *root,int sum){
    if(root==NULL)
        return 0;
   if(root->left==NULL && root->right==NULL){
       if(sum-root->id==0)
            return 1;
       else
            return 0;
   }
   int x = root2leaf_particular_sum(root->left,sum-root->id);
   int y = root2leaf_particular_sum(root->right,sum-root->id);
return x||y;
    
}
