class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <=1) return s;
         string ans = "";
         int ansLength = ans.length();
      
         for(int i = 0;i<s.length();i++)
         {
            int l = i;
            int r = i;
            // odd length
            while(l >= 0 && r< s.length() && s[l] == s[r])
            {
                if((r-l+1) > ansLength)
                {
                    ansLength = (r-l+1);
                   ans = s.substr(l, ansLength);
                }
                l--;
                r++;
            }
            // even Length
            l = i;
            r = i+1;
            while(l >=0 && r<s.length() && s[l] == s[r] )
            {
                if((r-l+1) > ansLength)
                {
                    ansLength = r-l+1;
                    ans = s.substr(l,ansLength);
                }
                l--;
                r++;
            }
         }
         return ans;
    }
};