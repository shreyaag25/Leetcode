class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> mp;
        for(int i = 0; i<numbers.size(); i++)
        {
            int j = target - numbers[i];
            if(mp.find(j)!=mp.end())
            {
                return { mp[j], i+1};
            }
            mp[numbers[i]] = i+1;
        }
        return {};
    }
};