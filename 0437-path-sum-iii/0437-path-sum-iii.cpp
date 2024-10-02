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
    int DFS(TreeNode* root, int targetSum,long long currSum)
    {
        if(root == nullptr) return 0;
        int ans = 0;
        currSum += root->val;
        if(currSum == targetSum) ans++;
        
        return ans + DFS(root->left,targetSum,currSum) +DFS(root->right,targetSum,currSum);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return 0;

        return DFS(root,targetSum,0) + pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
    }
};