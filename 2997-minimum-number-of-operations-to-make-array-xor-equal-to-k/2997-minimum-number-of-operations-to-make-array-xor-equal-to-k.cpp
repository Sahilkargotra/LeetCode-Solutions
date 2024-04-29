class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(int i =0 ;i<=20;i++)
        {
            int xorVal = 0;
            for(auto x: nums)
            {
                int bitVal = (1<<i)&x;
                xorVal = xorVal^bitVal;
            }
            int kBitVal = (1<<i) &k;
            if(xorVal != kBitVal) ans++;
        
        }
        return ans;
    }
};