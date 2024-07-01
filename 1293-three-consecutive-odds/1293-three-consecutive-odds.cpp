class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        if(arr.size() < 2) return false;
        for(auto x: arr)
        {
            if( x % 2 != 0)
            {
                if( count == 2) return true;
                
                if(count < 2) count++;

            }
            else
            count =  0 ;
        }
        return false;
    }
};