class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // vector<int> ans;
        // map<int,int> mp;
        // //TC - O(n).logn  SC - O(n)
        // int minValue = nums.size()/3 +1;
        // for(auto num : nums)
        // {
        //     mp[num]++;
        //     if(mp[num] == minValue)
        //         ans.push_back(num);
        // }
        // return ans;

        //OPTIMAL
        vector<int> ans;     //ans can be of maximum length = 2
        //tc - o(2n) SC - O(1)
        int count1 = 0, count2 = 0;
        int element1 = INT_MIN, element2 = INT_MIN;
        for(auto num:nums)
        {
            if(count1==0 && element2!=num)
            {
                count1=1;
                element1 = num;
            } 
            else if(count2==0 && element1!=num)
            {
                count2 = 1;
                element2 = num;
            } 
            else if(element1 == num )
                count1++;
            else if(element2 == num)
                count2++;
            else
            {
                count1--;
                count2--;
            }
        }

        int c1 = 0, c2 = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(element1 == nums[i])
                c1++;
            if(element2 == nums[i])
                c2++;
        }
        if(c1>nums.size()/3)
            ans.push_back(element1);
        if(c2>nums.size()/3)
            ans.push_back(element2);
        sort(ans.begin(), ans.end());
        return ans;
    }

};