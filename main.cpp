
#include <LibTree.h>

using namespace std;
int main() {
    Tree tr;
    TreeNode *t1,*t2,*t3,*t4,*t5;
    /*
     *          10
     *         /  \
     *        7    15
     *       / \   / \
     *      3   8 14  18
     *     / \    /   / \
     *    2  6   13  16  20
     *             \
     *              12  
     * */
    t1=tr.insert(10,NULL,0);
    t2=tr.insert(7,t1,0);
    tr.insert(8);
    tr.insert(3);
    tr.insert(2);
    tr.insert(6);
    tr.insert(15);
    tr.insert(14);
    tr.insert(13);
    tr.insert(12);
    tr.insert(18);
    tr.insert(16);
    tr.insert(20);
    cout<<"LEVEL ORDER"<<endl;
    tr.print();
    cout<<"SPIRAL ORDER"<<endl;
    tr.printS();
    cout<<"K DISTANCE"<<endl;
    tr.kdistance(tr.getRoot(),15,2);
    cout<<endl<<"ITERATIVE PREORDER"<<endl;
    tr.Iterative_Preorder();
    return 0;
}
