#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <algorithm>
#define LEFT 0
#define RIGHT 1

class TreeNode{
public:
    int id;
public:
    TreeNode *left;
    TreeNode *right;
    bool rightThreaded;
    TreeNode(int temp=0){id=temp;left=NULL;right=NULL;rightThreaded=false;}
};
class Tree{
    TreeNode *root;
    //postion 0 means left position 1 means right
public:
    Tree(){root=NULL;}
    TreeNode* insert(int id,TreeNode *parent=NULL,int position=-1);
    TreeNode* getRoot(){return root;}
    void setRoot(TreeNode *R){root=R;}
    void print();
    void printS();
    int kdistance(TreeNode* root,int id,int k);
    void print_k_distance_from_root(TreeNode*,int);
    int deletenode(int id);
    void Iterative_Preorder();
    void PrintLeaf2Root();
    void PrintRoot2Leaf(TreeNode*);
    void leaftorootmaxsum(TreeNode*);
    void l2lmaxsum(TreeNode *);
    TreeNode* Lcs_General(TreeNode *,int,int);
    TreeNode* Lcs_bst(TreeNode *,int,int);
    int sum_tree(TreeNode *);
    void tree2dll(TreeNode*);
    void vertical_print(TreeNode *);
    int hight_of_a_node(TreeNode*,int);
    void boundary_traversal(TreeNode*);
    int k_distance_from_leaf(TreeNode *,int,int);
    bool is_mirror(TreeNode*,TreeNode*);
    int Diameter(TreeNode*);
    TreeNode* make_Threaded_Recursion(TreeNode*);
    void print_Threaded(TreeNode *);
    void Iterative_PostOrder(TreeNode *);
    int Closest_Leaf(TreeNode*,int);
    int Print_Ancestor(TreeNode*,int);
    int is_AVL_balanced(TreeNode *);
    TreeNode* deepest_Leaf(TreeNode *,int);
    int root2leaf_particular_sum(TreeNode *root,int);
    int diff_sum_alternate_level(TreeNode*);
    TreeNode* Create_Tree_from_Inorder_Preorder(int inorder[],int preorder[],int,int);
};
