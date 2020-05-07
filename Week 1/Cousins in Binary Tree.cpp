/*


Question-In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

 

Example 1:


Input: root = [1,2,3,4], x = 4, y = 3
Output: false
Example 2:


Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
Output: true
Example 3:



Input: root = [1,2,3,null,4], x = 2, y = 3
Output: false
 

Note:

The number of nodes in the tree will be between 2 and 100.
Each node has a unique integer value from 1 to 100.
 */
 
 
 
 //Approach
 /*
 first find level of both nodes x and y
 if they on same level then find parent of both nodes
    if they have same parent then return false as they are siblings
    else return true
else 
  return false as they on different levels
*/
 
 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
 
 //Code

class Solution {
public:
    int height(TreeNode* root,int x,int level)
    {
        if(root==NULL )
        {
            return 0;
        }
        if(root->val==x)
        {
            return level;
        }
        else
        {
            return max(height(root->left,x,level+1),height(root->right,x,level+1));
        }
    }
    int parent(TreeNode* root,int x,int par)
    {
        if(root==NULL)
        {
            return -1;
        }
        if(root->val==x)
        {
            return par;
        }
        int l=parent(root->left,x,root->val);
        if(l!=-1)
        {
            return l;
        }
        else
            return parent(root->right,x,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int x1=height(root,x,0);
        int x2=height(root,y,0);
        if(x1!=x2)
        {
            return 0;
        }
        else
        {
            int y1=parent(root,x,-1);
            int y2=parent(root,y,-1);
            if(y1==y2)
            {
                return 0;
            }
            else
                return 1;
        }
    }
};
