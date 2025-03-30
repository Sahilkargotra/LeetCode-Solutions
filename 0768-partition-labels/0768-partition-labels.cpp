class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,int> mpp;

        for(int i = 0;i<s.size();i++)
        {
            mpp[s[i]] = i;
        }
        vector<int> result;
            int st = 0; int end = 0;
        for(int i = 0;i<s.size();i++)
        {
            end = max(end,mpp[s[i]]);
            if(i == end) 
            {
                result.push_back(end-st+1);
            st = i+1;
            }
        }
        return result;
    }
};