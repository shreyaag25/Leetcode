class Solution {
public:

    int solve(vector<vector<int>> matrix, vector<vector<int>> &dp, int i , int j)
    {
        if(j<0 || j>= matrix.size())
            return 1E9;
        if(i==0)
            return matrix[i][j];
        if(dp[i][j]!= -1)
            return dp[i][j];
        int s = matrix[i][j] + solve(matrix, dp, i-1, j);
        int ld = matrix[i][j] + solve(matrix, dp, i-1, j-1);
        int rd = matrix[i][j] + solve(matrix, dp, i-1, j+1);
        return dp[i][j] = min(s, min(ld, rd));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        //memoization - gives TLE
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int> (n,-1));

        // int mini = INT_MAX;
        // for(int j = 0; j<matrix[0].size(); j++)
        // {
        //     int val = solve(matrix, dp, n-1, j);
        //     mini = min(mini, val);
        // }
        // return mini;

        //tabulation
        int m = matrix[0].size();
        for(int j = 0; j<m; j++)
            dp[0][j] = matrix[0][j];
        for(int i = 1; i<n ; i++)
        {
            for(int j = 0; j<m ; j++)
            {
                int s = matrix[i][j] + dp[i-1][j];
                int ld = INT_MAX, rd = INT_MAX;
                if(j>0)
                     ld = matrix[i][j] + dp[i-1][j-1];
                if(j<m-1)
                     rd = matrix[i][j] + dp[i-1][j+1];
                dp[i][j] = min(s, min(ld,rd));
            }
        }
        int mini = INT_MAX;
        for(int j = 0;j<m ; j++)
            mini = min(mini, dp[m-1][j]);
        return mini;
    }
};