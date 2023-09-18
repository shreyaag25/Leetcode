class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int index;
        for(int i = 0;i<nums1.size();i++)
        {
            for(int j = 0 ; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                {
                    index = j;
                    index++;
                    while(index<nums2.size() && nums2[index]<nums1[i])
                    {
                        index++;
                    } 
                    if(index<nums2.size())
                    {
                        result.push_back(nums2[index]);;
                        break;
                    }
                    else
                    {
                        result.push_back(-1);
                        break;
                    }
                }
            }
            
        }
        return result;
    }
};