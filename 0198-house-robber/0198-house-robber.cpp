class Solution {
public:
    int find(int index, vector<int> nums, vector<int> &dp)
    {
        if(index == 0)
            return nums[0];
        if(index<0)
            return 0;
        if(dp[index]!=-1)
            return dp[index];
        int pick = nums[index] + find(index-2, nums, dp);
        int notPick = 0 + find(index-1, nums, dp);
        return max(pick, notPick);
    } 

    int rob(vector<int>& nums) {
        //memoization
        // vector<int> dp(nums.size(), -1);
        // return find(nums.size()-1, nums, dp);

        //tabulation - o(n) time and o(n) space
        // vector<int> dp(nums.size(), -1);
        // dp[0] = nums[0];
        // int neg = 0;
        // for(int i = 1; i<nums.size(); i++)
        // {
        //     int pick = nums[i];
        //     if(i>1)
        //         pick = pick+ dp[i-2];
        //     int notPick = dp[i-1];
        //     dp[i] = max(pick, notPick);
        // }
        // return dp[nums.size()-1];

        //space optimization - time - o(n ) and space - o (1)
        int prev = nums[0];
        int prev2 = 0;
        int curr ;
        for(int i = 1; i<nums.size(); i++)
        {
            int pick = nums[i] + prev2;
            int notPick = 0+ prev;
            curr = max(pick, notPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};