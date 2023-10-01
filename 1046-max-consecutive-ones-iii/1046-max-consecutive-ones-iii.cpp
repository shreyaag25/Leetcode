class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxi=-1;
        while(r<nums.size()){
            if(nums[r]==0 && k>0) 
			    k--;
            else if(nums[r]==0 && k<=0)
		    {
                while(nums[l]!=0) 
				    l++;
                l++;
            }
            maxi = max(r-l+1,maxi);
            r++;
        }

        return maxi;
    }
};