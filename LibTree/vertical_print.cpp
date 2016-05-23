#include <LibTree.h>
using namespace std;
bool custom_compare(pair<TreeNode*,int> a,pair<TreeNode*,int> b){
    return a.second < b.second;
}
void Tree::vertical_print(TreeNode *root){
    queue<pair<TreeNode*,int> > q;
    vector<pair<TreeNode*,int> > v;
    q.push(make_pair(root,0));
    while(!q.empty()){
        if((q.front().first)->left!=NULL){
            q.push(make_pair((q.front().first)->left,
               q.front().second - 1 
            ));            
        }
        if((q.front().first)->right!=NULL){
            q.push(make_pair((q.front().first)->right,
                    q.front().second + 1
            ));
        }
            v.push_back(q.front());
            q.pop();
    }
    
    sort(v.begin(),v.end(),custom_compare);
     vector<pair<TreeNode*,int> >::iterator beg =v.begin();
     vector<pair<TreeNode*,int> >::iterator end =v.end();
     int x=(*beg).second;
     while(beg!=end){
         if(x!=(*beg).second){
             x=(*beg).second;
             cout<<endl;
        }
        cout<<beg->first->id<<" ";
        beg++;
    }
}


