#include <LibTree.h>

void Tree::Iterative_PostOrder(TreeNode *root){
    std::stack<TreeNode*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
        if(st2.top()->left!=NULL)
            st1.push(st2.top()->left);
        if(st2.top()->right!=NULL)
            st1.push(st2.top()->right);
        
    }
    while(!st2.empty()){
        std::cout<<st2.top()->id<<",";
        st2.pop();
    }
}
