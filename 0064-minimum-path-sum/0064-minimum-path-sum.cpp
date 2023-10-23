class Solution {
public:
    int solve(vector<vector<int>>& grid, vector<vector<int>> &dp, int i, int j)
    {
        if(i==0 && j==0)
            return grid[i][j];
        if(i<0 || j<0)
            return INT_MAX;
        if(dp[i][j] != -1)
            return dp[i][j];
        int up = solve(grid, dp, i-1, j);
        int left = solve(grid, dp, i, j-1) ;
        return dp[i][j] = grid[i][j] + min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        //MEMOIZATION
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m , vector<int> (n,-1));

        // int ans = solve(grid, dp, m-1, n-1);
        // return ans;

        //tabulation
        dp[0][0] = grid[0][0];

        for(int i = 1; i<m; i++)
            dp[i][0] = dp[i-1][0] +grid[i][0];

        for(int i = 1 ; i<n ; i++)
            dp[0][i] = dp[0][i-1]+ grid[0][i];
        
        for(int i = 1; i<m ; i++)
        {
            for(int j = 1; j<n ; j++)
            {
                int up = dp[i-1][j];
                int left = dp[i][j-1];
                dp[i][j] = grid[i][j] + min(up, left);
            }
        }
        return dp[m-1][n-1];

    }
};