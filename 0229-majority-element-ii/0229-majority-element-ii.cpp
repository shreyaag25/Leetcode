class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        int minValue = nums.size()/3 +1;
        for(auto num : nums)
        {
            mp[num]++;
            if(mp[num] == minValue)
                ans.push_back(num);
        }
        return ans;
    }

};