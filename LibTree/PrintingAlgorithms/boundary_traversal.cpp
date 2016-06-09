#include <LibTree.h>
void Tree::boundary_traversal(TreeNode *root){
    if(root==NULL)return;
    TreeNode *temp;
    std::stack<TreeNode*> st;
    temp=root;
    while(temp->left!=NULL || temp->right != NULL){
        std::cout<<temp->id<<" ";
        if(temp->left!=NULL)
            temp=temp->left;
        else{
        if(temp->right!=NULL)
            temp=temp->right;
        }
    }
    /*
     * THIS LOGIC IS A BIT HARD USES ITERATIVE INORDER TO DETECT LEAVES,WE CAN ALSO USE RECURSIVE
     * IF WE WANT
     * the idea is every null that we get will get us a valid node
     * thus we deliberately push null values into the tree
     */
    st.push(root);
    while(st.empty()==false){
              if(st.top()!=NULL){
                st.push(st.top()->left);
        }
        else{
                st.pop();
                if(!st.empty()){
                temp=st.top();
                if(temp->left==NULL && temp->right == NULL)
                std::cout<<temp->id<<" ";
                st.pop();
                st.push(temp->right);
                }
        }
        
    }
    
     while(!st.empty()){
            st.pop();
        }
        temp=root;
        while(temp->left!=NULL || temp->right != NULL){
        st.push(temp);
            if(temp->right!=NULL)
            temp=temp->right;
            else{
                if(temp->left!=NULL)
                    temp=temp->left;
            }
        }
        while(!st.empty()){
            std::cout<<st.top()->id<<" ";
            st.pop();
        }
}
