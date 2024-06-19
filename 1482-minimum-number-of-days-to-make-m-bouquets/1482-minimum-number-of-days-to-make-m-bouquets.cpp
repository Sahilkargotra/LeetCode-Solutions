class Solution {
    private:
    bool possible(vector<int>& bloomDay,int day, int m, int k) 
    {
        int cnt = 0;
        int bouquet = 0;
        for(int i = 0;i<bloomDay.size();i++)
        {
            if(bloomDay[i] <=day)
            {
                cnt++;
            }
            else
            {
                bouquet += cnt/k;
                cnt = 0;
            }
        }
            bouquet += cnt/k;
       return bouquet >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(auto x: bloomDay)
        {
             mini = min(x,mini);
             maxi = max(x,maxi);
        }
 long long val = (m*1ll) *(k*1ll);
 if( val > bloomDay.size()) return -1;
 int l = mini;
 int r = maxi;
 while(l <=r)
 {
    int mid = l + (r-l)/2;
    if(possible(bloomDay,mid,m,k))
    r = mid-1;
    else 
    l = mid+1;
 }
 return l;
    }
};