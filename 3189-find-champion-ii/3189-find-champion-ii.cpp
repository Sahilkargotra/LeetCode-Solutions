class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n,0);
        for(const auto &edge : edges)
        {
            indegree[edge[1]]++;
        }
        vector<int> champions;
        for(int i = 0;i<n;i++)
        {
            if(indegree[i] == 0)
            {
                champions.push_back(i);
            }
        }
        if(champions.size() >1 ) return -1;
        
        return champions[0];
    }
};