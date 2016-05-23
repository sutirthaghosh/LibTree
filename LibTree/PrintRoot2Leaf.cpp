#include<LibTree.h>

void Tree::PrintRoot2Leaf(TreeNode *root){
    static std::deque<TreeNode*> q;
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL){
        std::queue<TreeNode*> temp;
        while(q.empty()==false){
            std::cout<<q.front()->id<<"->";
            temp.push(q.front());
            q.pop_front();
        }
        while(temp.empty()==false){
            q.push_back(temp.front());
            temp.pop();
        }
        
        std::cout<<root->id<<std::endl;
        return;
    }
    q.push_back(root);
    
    PrintRoot2Leaf(root->left);
    PrintRoot2Leaf(root->right);
    
    q.pop_back();    
}
