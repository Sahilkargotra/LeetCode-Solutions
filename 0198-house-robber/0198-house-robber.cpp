                              // MOST OPTIMIZED //
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = 0;
        int prev2 = 0;
        for(int i  = 0; i<n;i++)
        {
            int take = nums[i] + prev2;
            int notTake  = prev;
            int curr = max(take,notTake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};