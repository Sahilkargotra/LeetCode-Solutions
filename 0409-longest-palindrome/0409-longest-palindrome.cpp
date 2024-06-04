class Solution {
public:
    int longestPalindrome(string s) {
        set<char> st;
        int ans = 0;
        for(auto x: s)
        {
            if(st.find(x) != st.end())
            {
                st.erase(x);
                ans += 2;
            }
            else
            {
                st.insert(x);
            }
        }
            if(!st.empty())
            {
                ans += 1;                            //we will check  here if set is not  empty i.e some character are appearing  odd number of times . So  we  take  only  one element  from odd number of  elemnets.
            }
        return ans;
    }
};