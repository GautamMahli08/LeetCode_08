---------------------- LEETCODE ------------------------

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
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL)
            return false;
        int sum=targetSum-root->val;
        if(root->left==NULL && root->right==NULL && root->val == targetSum)
        return true;
        return hasPathSum(root->left,sum)|| hasPathSum(root->right,sum);
    }
};


--------------------------- CPP --------------------------------


#include <iostream>

using namespace std;


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };



    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL)
            return false;
        int sum=targetSum-root->val;
        if(root->left==NULL && root->right==NULL && root->val == targetSum)
        return true;
        return hasPathSum(root->left,sum)|| hasPathSum(root->right,sum);
    }


int main()
{
    struct TreeNode* root=new TreeNode(5);
  root->left=new TreeNode(4);
  root->right=new TreeNode(8);
  root->left->left=new TreeNode(11);
  root->left->right=new TreeNode();
  root->left->left->left=new TreeNode(7);
  root->left->left->right=new TreeNode(2);
  root->right->left=new TreeNode(13);
  root->right->right=new TreeNode(4);
  root->right->right->right=new TreeNode(1);

  int target=22;
    cout <<hasPathSum(root,target);


    return 0;
}

  
