class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(nums.size() == 1) return nums[0];
        double sum = 0;
        for(int i = 0;i<k;i++)
        {
            sum += nums[i];
        }
        double ans  = sum/k;
        for(int i = k ;i<=n;i++)
          {
            sum += nums[i] - nums[i-k];
             double  average = sum/ k;
            ans = max(ans,average);
          }
return ans;
            }
};