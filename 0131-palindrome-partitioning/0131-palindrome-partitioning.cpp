class Solution {
    private:
    bool isPali(string s,int left,int right)
    {
           while(left < right)
           {
            if( s[left++] != s[right--]) return false;
           }
           return true;
    }

    void backtrack( string& s,int start , vector<string> & path , vector<vector<string>>& ans )
    {
        if(start == s.length())
        {
           ans.push_back(path);
           return;
        } 

        for(int end = start+1; end <= s.length(); end++)
        {
            if( isPali(s,start,end-1))
            {
                path.push_back(s.substr(start, end-start));

                backtrack(s,end,path,ans);

                path.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
         vector<vector<string>> ans;
         vector<string> path;
         backtrack(s,0,path,ans);
        return ans;
    }
};