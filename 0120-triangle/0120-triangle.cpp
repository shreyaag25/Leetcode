class Solution {
public:

    int solve(vector<vector<int>>& triangle, vector<vector<int>> &dp, int i, int j)
    {
        if(i==triangle.size()-1)
            return triangle[i][j];
        if(dp[i][j] != -1)
            return dp[i][j];
        int down = triangle[i][j] +  solve(triangle, dp, i+1, j);
        int diag = triangle[i][j] +  solve(triangle, dp, i+1, j+1) ;
        return dp[i][j] = min(down, diag);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        //MEMOIZATION
        int m = triangle.size();
        vector<vector<int>> dp(m, vector<int>(m,-1));
        // int ans = solve(triangle, dp,0, 0);
        // return ans;

        //TABULATION
        for(int i = 0; i< m ; i++)
            dp[m-1][i] = triangle[m-1][i];
        
        for(int i = m-2 ; i >=0 ; i--)
        {
            for(int j = i ; j>=0 ; j--)
            {
                int down = triangle[i][j] + dp[i+1][j];
                int diag = triangle[i][j] + dp[i+1][j+1];
                dp[i][j] = min(down, diag);
            }
        }
        return dp[0][0];
    }
};