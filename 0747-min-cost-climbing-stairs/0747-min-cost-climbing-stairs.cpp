class Solution {
public:
    //recursive call
    // int find(vector<int> &cost, int index)
    // {
    //     if(index ==0 || index == 1)
    //         return cost[index];
    //     int l,r;
    //     if(index == cost.size())
    //         l = find(cost, index-1) + 0;
    //     else
    //         l = find(cost, index-1) + cost[index];
    //     if(index == cost.size())
    //         r = find(cost, index-2) + 0;
    //     else
    //         r = find(cost, index-2) + cost[index];
    //     return min(l,r);
    // }

    int minCostClimbingStairs(vector<int>& cost) {
        // int ans = find(cost, cost.size());
        // return ans;

        //tabulation
        vector<int> dp(cost.size()+1, -1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        int l, r = INT_MAX;
        if (cost.size() == 2)
            return min(cost[0], cost[1]);
        for(int index = 2; index<=cost.size() ; index++)
        {
            if(index == cost.size())
            {
                l = dp[index-1] + 0;
                r = dp[index-2] +0;
            }
            else
            {
                l = dp[index-1] + cost[index];
                r = dp[index-2] +cost[index];
            }
            dp[index] = min(l, r);
        }
        return dp[cost.size()];
        
    }
};