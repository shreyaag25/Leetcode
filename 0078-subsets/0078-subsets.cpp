class Solution {
public:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) //pass reference of ans
    {
        if(index==nums.size())
        {
            ans.push_back(output);
            return;
        }
        output.push_back(nums[index]);
        solve(nums, output, index+1, ans);
        output.pop_back();
        solve(nums, output, index+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, index, ans);
        return ans;
    }
};