class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        dp[0]=1 ;
        dp[1] = 1;
        for(int i = 2; i<=n ;i++)
        {
            int l = dp[i-1];
            int r = dp[i-2];
            dp[i] = l+r;
        }
        return dp[n];
    }
};