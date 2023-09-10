class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // map<int,int> count;
        // //O(nlogn) - inserting count in map takes n logn time
        // for(int i =0;i<n;i++)
        // {
        //     count[nums[i]]++;
        // }
        // //O(n)
        // for(auto it : count)
        // {
        //     if(it.second>n/2)
        //         return it.first;
        // }
        // return -1;

        int count = 0;
        int element;
        for(int i =0;i<nums.size();i++)
        {
            if(count==0)
            {
                element = nums[i];
                count = 1;
            }
            else if(element == nums[i])
                count++;
            else
                count--;
        }
        return element;
        //used when we want the count of the majority element
        // int c = 0;
        // for(int i =0;i<nums.size();i++)
        //     if(nums[i]==element)
        //         c++;
        // if(c==nums.size()/2)
        //     return c;
        // return -1;
    }
};