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
    private:
    int goodNodes(TreeNode* root,int maxVal)
    {
        if(!root) return 0;
        int ans = (root->val >= maxVal)? 1 : 0;
        maxVal = max(root->val,maxVal);

        ans += goodNodes(root->left,maxVal);
        ans += goodNodes(root->right,maxVal);

        return ans;
    }
public:
    int goodNodes(TreeNode* root) {
        return goodNodes(root,root->val);
    }
};