class Solution {
public:
    long long waysToSplitArray(vector<int>& nums) {
        long long n = nums.size();
        long long total_sum = accumulate(nums.begin(),nums.end(),0LL);
        long long p_sum = 0;
        long long valid_split = 0;
        for(int i = 0;i<n-1;i++)
        {
            p_sum += nums[i];
            if(p_sum >= (total_sum - p_sum) )
            {
                valid_split++;
            }
        }
        return valid_split;
    }
};