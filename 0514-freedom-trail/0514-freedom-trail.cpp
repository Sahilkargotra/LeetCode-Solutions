class Solution {
    private:
    int solve(string& ring, string& key,int ptr,int index, vector<vector<int>>& dp)
    {
        int n  = ring.size();
        int m  = key.size();
        if(dp[index][ptr] != -1) return dp[index][ptr];
        //Base Case
        if(index >= m ) return 0;
        //Choice
        int steps = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            if(ring[i] == key[index])
            {
                steps = min(steps, min(abs(i-ptr),n-abs(i-ptr))
                + 1 + solve(ring,key,i,index+1,dp));
            }
        }
        return dp[index][ptr] = steps;
    }
public:
    int findRotateSteps(string ring, string key) {
        int n  = ring.size();
        int m  = key.size();
        int ptr = 0;
        int index = 0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(ring,key,ptr,index,dp);
    }
};