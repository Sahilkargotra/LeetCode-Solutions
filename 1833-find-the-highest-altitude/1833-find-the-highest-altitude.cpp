class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int  n = gain.size();
        int ans  = 0;
         int prefix = 0;
        for(int i = 0;i<n;i++)
        {
           prefix += gain[i];
           ans = max(prefix,ans);
        }
        return ans;
    }
};