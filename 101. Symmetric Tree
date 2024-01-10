----------------------- LeetCode -------------------

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
   bool helper(TreeNode* left, TreeNode* right){
    if(left==0 && right ==0)
        return true;
    if(left==0 || right==0|| left->val!=right->val)
        return false;
    return helper(left->left, right->right) && helper(left->right, right->left);
    }
    
bool isSymmetric(TreeNode* root)
{
   if(!root){
        return true;
   }
    return helper(root->left, root->right);
}
};


---------------------------- CPP ---------------------------------

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
  bool helper(TreeNode* left, TreeNode* right){
    if(left==0 && right ==0)
        return true;
    if(left==0 || right==0|| left->val!=right->val)
        return false;
    return helper(left->left, right->right) && helper(left->right, right->left);
    }

bool Is_Symmetric(TreeNode* root)
{
   if(!root){
        return true;
   }
    return helper(root->left, root->right);
}

int main()
{
  struct TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(2);
  root->left->left=new TreeNode(3);
  root->left->right=new TreeNode(4);
  root->right->left=new TreeNode(4);
  root->right->left=new TreeNode(3);


  cout<<"Output = "<<Is_Symmetric(root);

   return 0;
}

