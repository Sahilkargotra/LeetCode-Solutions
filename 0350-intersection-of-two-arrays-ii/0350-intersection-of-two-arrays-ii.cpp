class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto x: nums1)
        {
            mp[x]++;
        }
        for(int i = 0; i < nums2.size();i++)
        {
            if(mp[nums2[i]] > 0) 
            {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
            else 
            continue;
        }
        return ans;
    }
};