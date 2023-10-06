class Solution {
public:
    int integerBreak(int n) {
        int dp[59] = {-1};
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        int maxi = INT_MIN;
        for(int i = 4 ; i <= n; i++)
        {
            maxi = INT_MIN;
            for(int j = 2 ; j< i-1 ; j++)
            {
                int first = j;
                int second = i-j;
                maxi = max(dp[first]*dp[second], maxi);
            }
            dp[i] = maxi; 
        }
        return dp[n];
    }
};