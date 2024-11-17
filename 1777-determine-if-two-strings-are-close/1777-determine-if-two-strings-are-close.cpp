class Solution {
   
public:
    bool closeStrings(string word1, string word2) {
        int length = word1.size();
       if(word1.size() != word2.size()) return false;
      vector<int> freq1(26);
      vector<int> freq2(26);

      for(int i = 0;i<length;i++)
      {
        char c1 = word1[i];
        char c2 = word2[i];

        int idx1 = c1-'a';
        int idx2 = c2-'a';

        freq1[idx1]++;
        freq2[idx2]++;
      }
      for(int i = 0;i<26;i++)
      {
        if(freq1[i] != 0 && freq2[i] != 0 ) continue;
        if(freq1[i] == 0 && freq2[i] == 0 ) continue;

        return false;
      }
      sort(freq1.begin(),freq1.end());
      sort(freq2.begin(),freq2.end());
 
 return freq1 == freq2;
    }
};