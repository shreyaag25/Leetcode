class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        //TC - O(n^2) && SC - o(1) - BRUTE FORCE
        // vector<int> result;
        // for(int i = 0 ; i<nums.size(); i++)
        // {
        //     int f = 0;
        //     for(int j = i+1; j<nums.size() ; j++)
        //     {
        //         if(nums[j]>nums[i])
        //         {
        //             f=1;
        //             result.push_back(nums[j]);
        //             break;
        //         }
        //     }
        //     if(f==0)
        //     {
        //         for(int j = 0 ; j<i ;j++)
        //         {
        //             if(nums[j]>nums[i]) 
        //             {   
        //                 f=1;    
        //                 result.push_back(nums[j]);  
        //                 break;  
        //             }   
        //         }  
        //     }
        //     if(f==0)
        //         result.push_back(-1);
        // }
        // return result;

        //TC - O(n) && SC - O(n) --> OPTIMAL
        vector<int> nqe;
        stack<int> st;
        
          int n=nums.size();
        for(int i=2*nums.size()-1; i>=0; i--){
            while(!st.empty() && nums[i%n]>=st.top()){
                st.pop();
            }
            if(i<n){
                if(st.empty()==false){   
                    nqe.push_back(st.top());
               }     
               else 
                    nqe.push_back(-1);
            }
            st.push(nums[i%n]);  
        }
        reverse(nqe.begin(),nqe.end());
        return nqe;
        
    }
};