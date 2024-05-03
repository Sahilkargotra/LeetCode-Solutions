class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n = version1.size();
        int m = version2.size();
        for(int i =0,j =0 ; (i<n) || (j<m); i++,j++)
        {
            int val1 = 0;
            int val2 = 0;
           while((i<n) && (version1[i] != '.')) val1 = val1*10 + (version1[i++]-'0');
           while((j<m) && (version2[j] != '.')) val2 = val2*10 + (version2[j++]-'0');

           if(val1 > val2) return 1;
           if(val2 >val1) return -1;
        }
        return 0;
    }
};