#include <LibTree.h>
using namespace std;
 
Tree::Tree(int a){
    root=NULL;
    /*
     *          10
     *         /  \
     *        7    15
     *       / \   / \
     *      3   8 14  18
     *     / \    /   / \
     *    2  6   13  16  20
     *           /  
     *          12  
     * */
    int preorder[] = {10,7,3,2,6,8,15,14,13,12,18,16,20};
    int inorder[]= {2,3,6,7,8,10,12,13,14,15,16,18,20};
    int i=0;
    setRoot(Create_Tree_from_Inorder_Preorder(inorder,preorder,0,12,i));
    /*insert(10);
    insert(7);
    insert(8);
    insert(3);
    insert(2);
    insert(6);
    insert(15);
    insert(14);
    insert(13);
    insert(12);
    insert(18);
    insert(16);
    insert(20);*/
        
        std::cout<<"Creating Tree"<<a;
    }
    
map<std::string,Tree*> TreeAlgoRegistrar :: registrar;

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

void Tree::looper(){
    for(auto &&i : TreeAlgoRegistrar::registrar){
        std::cout<<std::endl<<"-----------------------------"<<std::endl;
        std::cout<<std::endl<<i.first<<" "<<std::endl;
        i.second->Algo();
        std::cout<<std::endl<<"-----------------------------"<<std::endl;
    }
}
