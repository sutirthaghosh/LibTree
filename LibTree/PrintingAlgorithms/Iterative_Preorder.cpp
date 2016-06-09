#include <LibTree.h>
 using namespace std;
 /*
  * in preorder we traverse first root then left and then right
  *push the root and then its right child and left child
  * pop the root and print it , do it untill stack* empty
  */
 void Tree::Iterative_Preorder(){
     stack<TreeNode*> st;
     TreeNode* ptrleft=NULL;
     TreeNode* ptrright=NULL;
     if(root!=NULL)
        st.push(root);
     else
         return;
     while(st.empty()==false){
         cout<<st.top()->id<<" ";
         ptrleft=st.top()->left;
         ptrright=st.top()->right;
         st.pop();
         if(ptrright!=NULL)
            st.push(ptrright);
         if(ptrleft!=NULL)
             st.push(ptrleft);
    }
 }
