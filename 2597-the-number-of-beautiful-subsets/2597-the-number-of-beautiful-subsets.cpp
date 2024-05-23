class Solution {
    private:
     int backtrack(vector<int>& nums, int i, int k, unordered_map<int,int>& mp)
     {
        if(i == nums.size()) return 1;
           int take = 0;
             if(!mp[nums[i]-k] && !mp[nums[i]+k])
             {
             mp[nums[i]]++;
             take = backtrack(nums,i+1,k,mp);
             mp[nums[i]]--;
             }
             int not_take = backtrack(nums,i+1,k,mp);

             return take + not_take;
     }
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int ans = backtrack(nums,0,k,mp);
        return ans -1;
    }
};