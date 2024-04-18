class Solution {
    private: 
   int dfs(int row,int col, vector<vector<int>>& grid)
   {
     int n = grid.size();
        int m = grid[0].size();
    if( row<0 || row >= n || col < 0 || col>=m || grid[row][col] ==0) return 1;//water adds 1 to perimeter
    if(grid[row][col] == -1) return 0;
    grid[row][col] = -1;
   return dfs(row+1,col,grid)+
          dfs(row-1,col,grid)+
          dfs(row, col+1,grid)+
          dfs(row,col-1,grid);
   }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
       
        int perimeter = 0;

      
        for(int row =0 ;row<n;row++)
        {
            for(int col = 0;col<m;col++)
            { if(grid[row][col] == 1)
            
              perimeter += dfs(row,col,grid);
            }
        }
              return perimeter; 
    }
};