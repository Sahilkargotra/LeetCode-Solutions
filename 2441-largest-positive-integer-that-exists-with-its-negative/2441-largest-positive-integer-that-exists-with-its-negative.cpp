class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int res = -1;
        unordered_set<int> st(nums.begin(),nums.end());
        for(auto x: nums)
        {
            if(st.find(-x) != st.end())
            {
                res = max(res,x);
            }
        }
        return res;
    }
};