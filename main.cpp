
#include <LibTree.h>
#include <ncurses.h>
using namespace std;

void aux();
int main() {
    
   // initscr();
   // printw("Hello World !!!");
   // refresh();
    
    aux();
    getch();
   // endwin();
    return 0;
}
void aux(){
    Tree tr(1);
    TreeNode *t1,*t2,*t3,*t4,*t5;
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
    cout<<"LEVEL ORDER"<<endl;
    tr.print();
    cout<<"SPIRAL ORDER"<<endl;
    tr.printS();
    cout<<"K DISTANCE"<<endl;
    tr.kdistance(tr.getRoot(),18,2);
    cout<<endl<<"ITERATIVE PREORDER"<<endl;
    tr.Iterative_Preorder();
    cout<<endl<<"Leaf2Root"<<endl;
    tr.PrintLeaf2Root();
    cout<<"LCS"<<endl;
   // cout<<tr.Lcs_General(tr.getRoot(),13,12)->id<<endl;
    cout<<"LCS-BST"<<endl;
    if(tr.Lcs_bst(tr.getRoot(),6,2)!=NULL) 
    cout<<tr.Lcs_bst(tr.getRoot(),6,2)->id<<endl;
    cout<<"VERTICAL ORDER"<<endl;
    tr.vertical_print(tr.getRoot());
    cout<<endl<<"ROOT2LEAF"<<endl;
    tr.PrintRoot2Leaf(tr.getRoot());
    cout<<endl<<"ROOT2LEAF MAXIMUM SUM"<<endl;
    tr.leaftorootmaxsum(tr.getRoot());
    cout<<endl<<"LEAF2LEAFMAXSUM"<<endl;
    tr.l2lmaxsum(tr.getRoot());
    cout<<endl<<"K distance from root"<<endl;
    tr.print_k_distance_from_root(tr.getRoot(),3);
    cout<<endl<<"HEIGHT of a NODE"<<endl;
    cout<<tr.hight_of_a_node(tr.getRoot(),12);
    cout<<endl<<"BOUNDARY TRAVERSAL"<<endl;
    tr.boundary_traversal(tr.getRoot());
    cout<<endl<<"K DISTANCE FROM LEAF"<<endl;
    tr.k_distance_from_leaf(tr.getRoot(),12,5);
    cout<<endl<<"DIAMETER OF THE TREE";
    cout<<tr.Diameter(tr.getRoot());
    cout<<endl<<"POST ORDER";
    tr.Iterative_PostOrder(tr.getRoot());
    cout<<endl<<"CLOSEST LEAF"<<" "<<tr.Closest_Leaf(tr.getRoot(),3);
    cout<<endl<<"PRINT ANCSTOR";
    tr.Print_Ancestor(tr.getRoot(),13);
    tr.is_AVL_balanced(tr.getRoot());
    cout<<"DEEPEST LEAF"<<tr.deepest_Leaf(tr.getRoot(),0)->id;
    cout<<std::endl<<"ROOT2LEAF-Particular sum"<<tr.root2leaf_particular_sum(tr.getRoot(),25);
    cout<<std::endl<<"ALTERNATE LEVEL SUM DIFFERENCE "<<tr.diff_sum_alternate_level(tr.getRoot());
    cout<<endl<<"MULTIPLICATION OF SUM OF LEAF NODES AT ALL LEVELS"<<tr.multiplication_sum_level(tr.getRoot());
    cout<<endl<<"INORDER"<<" "<<tr.pair_particular_sum(tr.getRoot(),23);
    /*cout<<endl<<"*******WARNING THREADED TREE CREATING*******"<<endl;
    tr.make_Threaded_Recursion(tr.getRoot());
    tr.print_Threaded(tr.getRoot());*/
    //cout<<"WARNING TREE STRUCTURE CHANGING--->TREE 2 DOUBLY LINK LIST"<<endl;
    //tr.tree2dll(tr.getRoot());
    //tr.sum_tree(tr.getRoot());
    //tr.print(); 
    tr.looper();
}
