class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      int n = score.size();
       vector<string> ans(n);
      vector<pair<int,int>> indices;
      for(int i = 0;i<n;i++)
       {
          indices.push_back({score[i],i});
       }
       sort(indices.rbegin(),indices.rend());
       for(int i = 0;i<n;i++)
       {
        if(i == 0) ans[indices[i].second] = "Gold Medal";
       else if(i == 1) ans[indices[i].second] = "Silver Medal";
       else if(i == 2) ans[indices[i].second] = "Bronze Medal";
        else  ans[indices[i].second] = to_string(i+1);
       }
       return ans;
    }
};