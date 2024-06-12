class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = -1;
        int mid = 0;
        int high = n;
        while(mid < high)
        {
            if(nums[mid] == 0)
            {
                low++;
                swap(nums[mid],nums[low]);
                mid++;
                            }
            else if(nums[mid] == 1) mid++;
            else
            {
                high--;
                swap(nums[mid],nums[high]);
            }
        }
    }
};