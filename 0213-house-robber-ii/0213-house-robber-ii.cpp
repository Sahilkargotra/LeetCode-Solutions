class Solution {
    private:
     int rob1(vector<int>& num) {
        int n = num.size();
        int prev = 0;
        int prev2 = 0;
        for(int i  = 0; i<n;i++)
        {
            int take = num[i] + prev2;
            int notTake  = prev;
            int curr = max(take,notTake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
public:
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n  = nums.size();
        if(n==1) return nums[0];
        for(int i = 0;i<n;i++)
        {
            if(i!= 0) temp1.push_back(nums[i]);
            if(i!= n-1) temp2.push_back(nums[i]);
        }
      return max(rob1(temp1),rob1(temp2));
    }
};