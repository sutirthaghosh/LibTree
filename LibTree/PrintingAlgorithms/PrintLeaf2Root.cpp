#include <LibTree.h>

using namespace std;
void printl2r(map<int,TreeNode*> m,TreeNode* leaf){
        while(leaf!=NULL){
            cout<<leaf->id<<" ";
            leaf=m[leaf->id];
        }
        cout<<endl;
}
void Tree::PrintLeaf2Root(){
    map<int,TreeNode*> m;
    stack<TreeNode*> st;
    TreeNode* ptrleft,*ptrright,*ptr;
    st.push(root);
    m[root->id]=NULL;
    while(!st.empty()){
        ptrright = st.top()->right;
        ptrleft = st.top()->left;
        ptr=st.top();
        st.pop();
        if(ptrright!=NULL){
            m[ptrright->id]=ptr;
            st.push(ptrright);
        }
        if(ptrleft!=NULL){
            m[ptrleft->id]=ptr;
            st.push(ptrleft);
        }
        if(ptrleft==NULL && ptrright==NULL)
            printl2r(m,ptr);
    }
}
