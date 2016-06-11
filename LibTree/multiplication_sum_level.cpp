#include <LibTree.h>

int Tree::multiplication_sum_level(TreeNode* root){
    std::queue<TreeNode*> q;
    int sum=0,mult=1;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        if(q.front()==NULL){
           // std::cout<<sum<<std::endl;
            q.pop();
            if(sum)
            mult*=sum;
            sum=0;
            if(q.size())
                q.push(NULL);
        }
        else{
            if(q.front()->left==NULL && q.front()->right==NULL)
                sum+=q.front()->id;
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
            q.pop();
        }
    }
    return mult;
}
