class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int ans = -1;
        for(int i = 0;i<nums1.size();i++)
        {
            ans = -1;
            for(int j = 0 ; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                {
                    for(int k = j;k<nums2.size();k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            ans = nums2[k];
                            break;
                        }
                    }
                        
                }
            }
            result.push_back(ans);
        }
        return result;
    }
};