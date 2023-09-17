class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        unordered_set<int> st;
        int longest = 1;
        for(auto n: nums)
            st.insert(n);
        int cnt ;
        for(auto it: st)
        {
            if(st.find(it-1)==st.end())
            {
                cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end())
                {
                    cnt ++;
                    x += 1;
                }
                longest = max(longest, cnt);
            }   
        }
        return longest;
    }
};