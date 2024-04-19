class Solution {
    private:
    void bfs(int row,int col,vector<vector<char>> grid,vector<vector<bool>>& vis)
    {
       vis[row][col] = true;
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
       queue<pair<int,int>> q;
       q.push({row,col});
       while(!q.empty())
       {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
      for(auto dir:directions)
            {
              int nrow = row+ dir.first;
              int ncol = col + dir.second;
              if(nrow >=0 && nrow < n && ncol>=0 && ncol<m
                 && grid[nrow][ncol] == '1' && !vis[nrow][ncol])
                 {
                    vis[nrow][ncol] = true;
                    q.push({nrow,ncol});
                 }
            }
       }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if(n == 0) return 0;
        int m = grid[0].size();
       vector<vector<bool>> vis(n,vector<bool>(m,false));
       int count = 0;
       for(int row = 0; row<n;row++)
       {
        for(int col = 0;col<m;col++)
        {
            if(!vis[row][col] && grid[row][col] == '1')
            {
                count++;
                bfs(row,col,grid,vis);
            }
        }
       }
       return count;
    }
};