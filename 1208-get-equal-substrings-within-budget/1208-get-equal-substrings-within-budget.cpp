class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int l  = 0;
        int r = 0;
        int cost = 0;
        int maxLength = 0;
        while(r<n)
        {
           cost += abs(s[r]-t[r]);
        
        if(cost > maxCost)
        {
            cost -= abs(s[l]-t[l]);
            l++;
        }
          maxLength = max(maxLength, r-l+1);
          r++;
        }
       return maxLength;
    }
};