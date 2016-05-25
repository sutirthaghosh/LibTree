#include<LibTree.h>
using namespace std;
bool custom_compare2(pair<TreeNode*,int> a, pair<TreeNode*,int> b)
{
  return a.second < b.second;
}
void Tree::vertical_print_2(TreeNode* root)
{
  queue<pair<TreeNode*,int> > q;
  vector<pair<TreeNode*,int> > v;
  q.push(make_pair(root,0));
  v.push_back(make_pair(root,0));
  while(!q.empty())
  {
    if(q.front().first->left != NULL)
    {
      q.push(make_pair(((q.front().first)->left),((q.front().second)-1)));
      v.push_back(make_pair(((q.front().first)->left),((q.front().second)-1)));
    }
    if(q.front().first->right != NULL)
    {
      q.push(make_pair(((q.front().first)->right),((q.front().second)+1)));
      v.push_back(make_pair(((q.front().first)->right),((q.front().second)+1)));
    }
    q.pop();
  }
  sort(v.begin(),v.end(),custom_compare2);
  vector<pair<TreeNode*,int> >::iterator p = v.begin();
  while(p != v.end())
  {
    int s = (*p).second;
    while((*p).second == s)
    {
      cout<<(*p).first->id<<" ";
      p++;
    }
    cout<<endl;
  }
}


    