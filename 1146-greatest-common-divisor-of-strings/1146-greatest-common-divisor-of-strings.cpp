class Solution {
    
    private: 
    string repeatString(const string& s, int count) {
        std::string result;
        for (int i = 0; i < count; ++i) {
            result += s;
        }
        return result;
    }

    bool isDivisor(string st,const string &str1,const  string &str2 )
    {
        int n  = str1.size();
        int m  = str2.size();
        int x  = st.size();
        if( n%x != 0 || m%x != 0 ) return false;
        
        return repeatString(st,(n/x)) == str1 &&
         repeatString(st ,(m/x)) == str2;
    }
public:
    string gcdOfStrings(string str1, string str2) {
        int n  = str1.size();
        int m  = str2.size();
        int len = min(n,m);
        for(int i = len ; i >0;i--)
        {
            string st = str1.substr(0,i);
       if(isDivisor(st,str1,str2))
       {
          return st;
       }
        }
        return "";
    }
};