class Solution {
public:

    int tabulation(vector<int> nums)
    {
        vector<int> dp(nums.size(), -1);
        dp[0] = nums[0];
        int neg = 0;
        for(int i = 1; i<nums.size(); i++)
        {
            int pick = nums[i];
            if(i>1)
                pick = pick+ dp[i-2];
            int notPick = dp[i-1];
            dp[i] = max(pick, notPick);
        }
        return dp[nums.size()-1];
    }

    int spaceOptimization(vector<int> nums)
    {
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

    int rob(vector<int>& nums) {
      // tabulation - o(n) time and o(n) space
        int n = nums.size();
        vector<int> temp1, temp2;
        if(n==1)
            return nums[0];
        for(int i = 0 ;i<n; i++)
        {
            if(i!=0)
                temp1.push_back(nums[i]);
            if(i!=n-1)
                temp2.push_back(nums[i]);
        }
        // int ans1 = tabulation(temp1);
        // int ans2 = tabulation(temp2);
        int ans1 = spaceOptimization(temp1);
        int ans2 = spaceOptimization(temp2);
        return max(ans1, ans2);
    } 
};