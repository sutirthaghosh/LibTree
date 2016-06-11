#include<LibTree.h>

bool Tree::pair_particular_sum(TreeNode* root,int sum){
    std::stack<TreeNode*> st_inorder,st_rev_inorder;
    int in_control=1,rev_in_control=1,val1=0,val2=0;
    TreeNode* temp;
    st_inorder.push(root);
    st_rev_inorder.push(root);
    while(!st_inorder.empty() || !st_inorder.empty()){
    while(in_control==1 && !st_inorder.empty()){
        if(st_inorder.top()!=NULL){
            st_inorder.push(st_inorder.top()->left);
        }
        else{
            st_inorder.pop();
            if(!st_inorder.empty()){
                temp=st_inorder.top();
                st_inorder.pop();
                val1=temp->id;
                st_inorder.push(temp->right);
                in_control=0;
            }
        }
    }
        
     while(rev_in_control==1 && !st_rev_inorder.empty()){
        if(st_rev_inorder.top()!=NULL){
            st_rev_inorder.push(st_rev_inorder.top()->right);
        }
        else{
            st_rev_inorder.pop();
            if(!st_rev_inorder.empty()){
                temp=st_rev_inorder.top();
                st_rev_inorder.pop();
                val2=temp->id;
                st_rev_inorder.push(temp->left);
                rev_in_control=0;
            }
        }
    }
        if(val1+val2==sum)
            break;
        else{ 
            if(val1+val2 > sum )
                rev_in_control=1;
            else
                in_control=1;
        }
                
    }    
    if(val1+val2==sum){
        std::cout<<std::endl<<val1<<"+"<<val2<<"="<<sum;
        return true;
    }
    else
        return false;
}
