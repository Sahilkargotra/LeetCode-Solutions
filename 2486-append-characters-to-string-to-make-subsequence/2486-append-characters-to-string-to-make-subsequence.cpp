class Solution {
public:
    int appendCharacters(string s, string t) {
        int l = 0;
        int r = 0;
        int n = s.size();
        int m = t.size();
        for( l = 0 ;l<n ; l++)
        {
            if(s[l] == t[r]) r++;
        }
        return m-r;
    }
};


// Solved in just  less than 5 mins
