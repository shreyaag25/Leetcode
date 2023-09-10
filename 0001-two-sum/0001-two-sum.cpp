class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> x;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             x.push_back(i);
        //             x.push_back(j);
        //         }
        //     }
        // }
        // return x;

        vector<int> ans;
        map<int, int> index;
        for(int i =0;i<nums.size();i++)
        {
            int j = target - nums[i];
            if(index.find(j)!=index.end())
            {
                ans.push_back(index[j]);
                ans.push_back(i);
                break;
            }
            index[nums[i]] = i;
        }
        return ans;
    }
};