#include <LibTree.h>

int search(int arr[],int key,int beg,int end){
    while(beg<=end){
        if(arr[beg]==key)
            break;
        beg++;
    }
    return (beg<=end)? beg : -1 ;
}
TreeNode* Tree::Create_Tree_from_Inorder_Preorder(int inorder[],int preorder[],int beg,int end){
    static int iter=0;
    TreeNode *root;
    if(beg>end)
        return NULL;
    root=new TreeNode(preorder[iter++]);
    
    
    int index = search(inorder,root->id,beg,end);
    
    root->left=Create_Tree_from_Inorder_Preorder(inorder,preorder,beg,index-1);
    root->right=Create_Tree_from_Inorder_Preorder(inorder,preorder,index+1,end);
    
    return root;
}
