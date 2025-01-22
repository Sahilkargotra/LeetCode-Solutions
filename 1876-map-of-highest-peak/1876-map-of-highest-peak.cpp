class Solution {
    
    bool isValid(int i,int j, int m,int n)
    {
        return (i >= 0 and i <m and j >= 0 and j <n);
    }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
          vector<vector<int>> height(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m,vector<bool>(n,0));
       for(int i = 0;i<m;i++)
       {
        for(int j = 0;j<n;j++)
        {
            if( isWater[i][j] == 1)
            {
                q.push({i,j});
                vis[i][j] = true;
            }
        }
       }

        int dir[5] = {-1,0,1,0,-1};
       int level = 0;
       while(!q.empty())
       {
        int size = q.size();
        for(int i = 0;i<size;i++)
        {
            auto curr = q.front();
            q.pop();

            int x = curr.first;
            int y = curr.second;
            for(int d = 0;d<4;d++)
            {
                int newX = x + dir[d];
                int newY = y + dir[d+1];
                if(isValid(newX,newY,m,n) && vis[newX][newY] != true)
                {
                    q.push({newX,newY});
                    height[newX][newY] = 1 + level;
                    vis[newX][newY] = true;
                }
            }

        }
        level++;
       }
        return height;
    }
};