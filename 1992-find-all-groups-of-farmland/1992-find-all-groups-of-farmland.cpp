class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& land, vector<int>& coordinates) {
        int n = land.size();
        int m = land[0].size();
        vis[row][col] = 1;
        coordinates[0] = min(coordinates[0], row);
        coordinates[1] = min(coordinates[1], col);
        coordinates[2] = max(coordinates[2], row);
        coordinates[3] = max(coordinates[3], col);
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int nrow = row + dr[i];
            int ncol = col + dc[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && land[nrow][ncol] == 1) {
                dfs(nrow, ncol, vis, land, coordinates);
            }
        }
    }

public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size();
        int m = land[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 0 && land[i][j] == 1) {
                    vector<int> coordinates = {i, j, i, j}; // Initialize coordinates with top left and bottom right corners
                    dfs(i, j, vis, land, coordinates);
                    ans.push_back(coordinates);
                }
            }
        }
        return ans;
    }
};
