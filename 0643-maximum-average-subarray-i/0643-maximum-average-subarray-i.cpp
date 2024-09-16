#include<algorithm>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if( n == 1 && k == 1)
        return nums[0];
        int window = 0;
        
        for(int i = 0;i<k;i++)
        {
         window += nums[i];
        }
        double ans = window;
        for(int i = k;i<n;i++)
        {
            window +=  nums[i] - nums[i-k];
            ans = max(ans,static_cast<double>(window));
        }
        return ans/k;
    }
};