#include <LibTree.h>
using namespace std;
TreeNode* Tree::insert(int id,TreeNode *parent,int position){
    TreeNode *temp=new TreeNode(id);
    if(parent!=NULL){
            if(position==LEFT)
                parent->left=temp;
            if(position==RIGHT)
                parent->right=temp;
        }
    else{
        if(root==NULL)
            root=temp;
        else{
          TreeNode **temp1;
          temp1=&root;
          while(*temp1!=NULL){
            if((*temp1)->id < id)
                temp1=&((*temp1)->right);
            else
                temp1=&((*temp1)->left);
            }
            *temp1=temp;
        }
    }
    return temp;
}
void Tree::print(){
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        if(q.front()==NULL){
            cout<<endl;
            q.pop();
            if(q.size()>=1)
            q.push(NULL);
        }
       else{
            cout<<q.front()->id<<" ";
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
            q.pop();
        }
            
    }
}

