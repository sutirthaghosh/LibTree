#include<LibTree.h>
using namespace std;
void Tree::printS(){
    deque<TreeNode*> q;
    q.push_back(root);
    q.push_back(NULL);
    while(true){
        while(q.front()!=NULL){
            cout<<q.front()->id<<" ";
            if(q.front()->left!=NULL)
                q.push_back(q.front()->left);
            if(q.front()->right!=NULL)
                q.push_back(q.front()->right);
            q.pop_front();
        }
        cout<<endl;
        if(q.back()==NULL && q.front()==NULL)
            break;
        while(q.back()!=NULL){
            cout<<q.back()->id<<" ";
            if(q.back()->right!=NULL)
                q.push_front(q.back()->right);
            if(q.back()->left!=NULL)
                q.push_front(q.back()->left);
            q.pop_back();
        }
        cout<<endl;
    }
    
    
}
