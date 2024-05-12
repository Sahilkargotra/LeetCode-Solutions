class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n  = grid.size();
         vector<vector<int>>  maxLocal;
         vector<int> row;
         int maxi = INT_MIN;
         
         for(int  i  =1 ;i<n-1; i++){ 
            for(int j = 1;j<n-1;j++) {
                int maxi = 0;
                    for(int a = i-1;a<=i+1;a++){
                        for(int b = j-1;b<= j+1;b++){
                             maxi = max(maxi,grid[a][b]);
                        }
                    }  
                    row.push_back(maxi);
            }

               maxLocal.push_back(row);
               row.clear();
         }
         return maxLocal;
    }
};