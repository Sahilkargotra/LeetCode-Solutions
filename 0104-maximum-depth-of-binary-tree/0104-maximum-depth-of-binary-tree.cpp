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
    int maxDepth(TreeNode* root) {
        int l = 0;
        int r = 0;
        if(!root) return 0;
        if(root->left == NULL&& root->right ==NULL) return 1;
        if(root->left)
         l =  maxDepth(root->left)+1;
        if(root->right)
         r = maxDepth(root->right)+1;
        return max(l,r);
    }
};