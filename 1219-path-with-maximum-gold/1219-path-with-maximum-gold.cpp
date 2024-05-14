class Solution {
    private: 
    int dfs(vector<vector<int>>& grid, int x, int y )
    {
         int n = grid.size();
        int m = grid[0].size();
          int delRow[] = {-1,0,1,0};
          int delCol[] = {0,1,0,-1};

if(x<0 || x>=n || y<0 || y>=m || grid[x][y] == 0) return 0;
         int curr  = grid[x][y];
         grid[x][y] = 0;
         int LocalMaxGold = curr;
         for(int  i  = 0;i<4;i++)
         {
            int drow = x + delRow[i];
            int dcol = y + delCol[i];
             LocalMaxGold = max(LocalMaxGold , curr+ dfs(grid,drow,dcol));
         }

         grid[x][y] = curr;

         return LocalMaxGold;

    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        int n = grid.size();
        int m = grid[0].size();
        for( int i = 0 ;i<n;i++)
        {for(int j =0;j<m;j++)
        {
            if(grid[i][j] != 0)
          maxGold = max(maxGold,dfs(grid,i,j));
        }
        }
      return maxGold;
    }
};