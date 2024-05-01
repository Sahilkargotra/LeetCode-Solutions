class Solution {
public:
    string reversePrefix(string word, char ch) {
        int len = 0;
      for(auto x: word)
      {
          
          len++;
          if(x == ch){
             reverse(word.begin(),word.begin()+len);
           break;
          }
      }
      
        return word;
    }
};