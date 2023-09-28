class Solution {
public:
    //OPTIMAL SOLUTION 
    // void solve(vector<int> nums, int index, vector<vector<int>> &ans)
    // {
    //     //base case
    //     if(index>=nums.size())
    //     {
    //         ans.push_back(nums);
    //         return;
    //     }

    //     for(int j=index ; j<nums.size();j++)
    //     {
    //         swap(nums[index], nums[j]);
    //         solve(nums, index+1, ans);
    //         swap(nums[index], nums[j]);
    //     }
    // }

    // vector<vector<int>> permute(vector<int>& nums) {
    //     vector<vector<int>> ans;
    //     int index =0; 
    //     solve(nums, index, ans);
    //     return ans;
    // }


    void solve(vector<int>& nums, vector<int> ds, vector<vector<int>> &ans, vector<int> freqMap)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i =0;i<nums.size(); i++)
        {
            if(freqMap[i]!=1)
            {
                ds.push_back(nums[i]);
                freqMap[i] = 1;
                solve(nums, ds, ans, freqMap);
                freqMap[i]=0;
                ds.pop_back();
            }
            
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freqMap (nums.size(), 0) ; 
        solve(nums, ds, ans, freqMap);
        return ans;
    }
};