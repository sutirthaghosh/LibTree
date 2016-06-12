#include <check_mirror.h>
    
    static RegisterAlgo handler (std::string("IS_MIRROR"),new check_mirror);
     
    bool check_mirror::is_mirror(TreeNode *left,TreeNode *right){
    if(left == NULL && right != NULL)
        return false;
    if(left != NULL && right == NULL)
        return false;
    if(left == NULL && right == NULL)
        return true;
    return (is_mirror(left->left,right->right)&&is_mirror(left->right,right->left));
     }
    
    
     void check_mirror::Algo(){
         std::cout<<std::endl<<"CHECK MIRROR";
         if(root!=NULL)
             std::cout<<is_mirror(root->left,root->right);
         if(root==NULL)
             std::cout<<"FCUK";
    }
   


