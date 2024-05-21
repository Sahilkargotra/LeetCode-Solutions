class Solution {
private:
    void solve(vector<int>& nums, int start, vector<int>& path,
               vector<vector<int>>& ans) {
        if (start == nums.size()) {
            ans.push_back(path);
            return;
        }
        solve(nums, start + 1, path, ans);
        path.push_back(nums[start]);
        solve(nums, start + 1, path, ans);
        path.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(nums, 0, path, ans);
        return ans;
    }
};