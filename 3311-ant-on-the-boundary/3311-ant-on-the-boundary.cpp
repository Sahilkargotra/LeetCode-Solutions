class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int  sum = 0;
        int count = 0;
        for(auto x: nums)
        {
           sum += x;
           if(sum == 0) count++;
        }
        return count;
    }
};