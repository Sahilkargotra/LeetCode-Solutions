class Solution {
    bool isPreSuf(string str1,string str2)
    {
        int n = str1.size();
        int m = str2.size();
        bool isPrefix = (n >= m && str1.substr(0,m) == str2);
        bool isSuffix = (n>= m && str1.substr(n-m,m) == str2);

        return isPrefix && isSuffix;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0;i< words.size();i++)
        {
            for(int j = 0;j< words.size();j++)
            {
                if( i<j && isPreSuf(words[j],words[i]))
                {
                    count++;
                }
            }
        }
        return count;
    }
};