#include <LibTree.h>
int Tree::diff_sum_alternate_level(TreeNode* root){
    std::queue<TreeNode*> q;
    int diff=0,level=1;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        if(q.front()==NULL){
            level=(level+1)%2;
            q.pop();
            if(q.size())
                q.push(NULL);
        }
        else{
            if(level)
                diff+=q.front()->id;
            else
                diff-=q.front()->id;
        
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
        q.pop();
            
        }

    }
    return diff;
}
