#include<LibTree.h>
using namespace std;

void Tree::height_of_node(int id, TreeNode* root)
{
  queue<TreeNode*> q;
  q.push(root);
  q.push(NULL);
  int count = 0;
  while(!q.empty())
  {
    if(q.front() != NULL)
    {
      if(q.front()->id == id)
      {
      cout<<count<<endl;
      break;
	}
      else
      {
	if(q.front()->left != NULL)
	  q.push(q.front()->left);
	if(q.front()->right != NULL)
	  q.push(q.front()->right);
      }
    q.pop();
    }
    else
    {
      q.pop();
      count++;
      if(q.size()>=1)
	q.push(NULL);
    }     
  }
}	
     