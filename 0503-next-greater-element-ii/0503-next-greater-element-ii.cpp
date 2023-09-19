class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        for(int i = 0 ; i<nums.size(); i++)
        {
            int f = 0;
            for(int j = i+1; j<nums.size() ; j++)
            {
                if(nums[j]>nums[i])
                {
                    f=1;
                    result.push_back(nums[j]);
                    break;
                }
            }
            if(f==0)
            {
                for(int j = 0 ; j<i ;j++)
                {
                    if(nums[j]>nums[i]) 
                    {   
                        f=1;    
                        result.push_back(nums[j]);  
                        break;  
                    }   
                }  
            }
            if(f==0)
                result.push_back(-1);
        }
        return result;
        
    }
};