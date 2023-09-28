class Solution {
public:
    void solve(int index, vector<int> nums, vector<int> ds, vector<vector<int>> &ans, int k , int n)
    {
        if(ds.size()==k && n==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i = index; i<nums.size(); i++)
        {
            if(i>index && nums[i]==nums[i-1])
                continue;
            if(n==0)
                break;
            ds.push_back(nums[i]);
            solve(i+1, nums, ds, ans, k, n-nums[i]);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> ds;
        vector<vector<int>> ans;
        int index = 0;
        solve(index,nums, ds, ans, k,n );
        return ans;
    }
};