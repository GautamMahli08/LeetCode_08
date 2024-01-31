---------------------------- LEETCODE  ------------------------

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
    int findBottomLeftValue(TreeNode* root) {
     queue<TreeNode*> Que;
     Que.push(root);

     while(!Que.empty()) {
         root=Que.front();
         Que.pop();
         if(root->right !=NULL)
                Que.push(root->right);
        if(root->left !=NULL) Que.push(root->left);
     }
        return root->val;
    }
}; 

---------------------------------------- CPP ------------------------------------------

#include <iostream>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode*> Que;
    Que.push(root);

    TreeNode* result = nullptr;

    while (!Que.empty()) {
        result = Que.front();  // Access the front element of the queue
        Que.pop();  // Remove the front element

        if (result->right != nullptr)
            Que.push(result->right);
        if (result->left != nullptr)
            Que.push(result->left);
    }

    return result->val;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    int bottomLeftValue = findBottomLeftValue(root);

    cout << "The value of the bottom-left node is: " << bottomLeftValue << endl;

    // Remember to free memory allocated for the tree nodes
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
