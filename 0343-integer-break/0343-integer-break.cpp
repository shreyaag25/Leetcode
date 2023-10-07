class Solution {
public:
    int integerBreak(int n) {

        //DP solution - O(n^2) SC- O(n) 
        // int dp[59] = {-1};
        // if(n==2)
        //     return 1;
        // if(n==3)
        //     return 2;
        // dp[1] = 1;
        // dp[2] = 2;
        // dp[3] = 3;
        // int maxi = INT_MIN;
        // for(int i = 4 ; i <= n; i++)
        // {
        //     maxi = INT_MIN;
        //     for(int j = 2 ; j<= i/2 ; j++)
        //     {
        //         int first = j;
        //         int second = i-j;
        //         maxi = max(dp[first]*dp[second], maxi);
        //     }
        //     dp[i] = maxi; 
        // }
        // return dp[n];

        //optimal - TC - O(1)
        if(n<=3)
            return n-1;
        if(n==4)
            return 4;
        int x = n/3;
        int y = n%3;
        if(y==0)
            return pow(3,x);
        if (y==1)
            return pow(3,x-1)*4;
        return pow(3,x)*2;



    }

};