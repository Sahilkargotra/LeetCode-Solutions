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
    void leaf(TreeNode* root,vector<int>& arr)
    {
          if(root->left == nullptr && root->right == nullptr)arr.push_back(root->val);
          if(root->left) leaf(root->left,arr);
          if(root->right) leaf(root->right,arr);

          return;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>left;
        vector<int>right;
           leaf(root1,left);
           leaf(root2,right);
return left == right;
    }
};