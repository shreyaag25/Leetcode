class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        //time complexity - O(m*n)
        //space - O(m)
        /*
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
        */

        //tc - O(m+n)
        //sc - O(nums2.size())
        vector<int> result;
        stack<int> s;
        map<int, int> mp;
        s.push(nums2[0]);
        for(int i =1; i<nums2.size(); i++)
        {
            while(!s.empty() && s.top() < nums2[i])
            {
                mp[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
            
        }
        for(auto n : nums1)
        {
            if(mp.find(n)==mp.end())
                result.push_back(-1);
            else
                result.push_back(mp[n]);
        }
        return result;
    }
};