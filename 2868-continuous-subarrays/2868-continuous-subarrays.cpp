class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        int l  = 0;
        long long count = 0;
        int  maxi  = INT_MIN;
        int  mini  = INT_MAX;
        long long window  = 0;
        int r;
      for( r = 0;r<n;r++)
      {
        maxi = max(maxi,nums[r]);
        mini = min(mini,nums[r]);
        if(maxi - mini >2)
        {
            window = r-l;
            count += (window*(window+1))/2;
         l = r;
         maxi = nums[r];
         mini = nums[r];
         while(abs(nums[r]-nums[l-1])<=2)
         {
            l--;
            maxi = max(maxi,nums[l]);
            mini = min(mini,nums[l]);
         }
         if(l < r) 
         {
            window = r-l;
            count -= (window*(window+1))/2;
         }
        }
      }
      window = r-l;
      count += (window*(window+1))/2;
      return count;
    }
};