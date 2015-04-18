class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int> > a(m,vector<int>(n));
        a[0][0] = grid[0][0];
        for(int i = 1;i<m;i++){
            a[i][0] = a[i-1][0]+grid[i][0];
        }
        for(int j = 1; j<n; j++){
            a[0][j] = a[0][j-1]+grid[0][j];
        }
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                a[i][j] = min(a[i][j-1],a[i-1][j]) + grid[i][j];
            }
        }
        return a[m-1][n-1];
    }
};