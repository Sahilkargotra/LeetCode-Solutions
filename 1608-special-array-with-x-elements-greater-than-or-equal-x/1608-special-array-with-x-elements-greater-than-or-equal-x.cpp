class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      for(int cnt = 0 ;cnt<= nums.size();cnt++)
        {
            int i = 0 ;
        for(auto x : nums )
        {
         if(x >= cnt)
         i++;
        }
        if (cnt == i ) return cnt;
        }
        return -1;
    }
};