class Solution {
public:
    int compress(vector<char>& chars) {
        int n  = chars.size();
        if(n == 0) return 0;
        int l = 0;
        int r = 0;
        while(r < n)
        {  
            int count  = 0;
            char  current  =  chars[r];
         while( r < n && chars[r] == current  )
         {
            count++;
            r++;
         }
         chars[l] = current;
         l++;
         if( count > 1)
{
    for (char  digit : to_string(count))
    {
               chars[l] = digit ;
               l++;
    }
}
   }
return l;
    }
};