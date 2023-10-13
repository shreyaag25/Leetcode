class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int l=0, r=0;
        if(s.size() == 0 || s.size()==1)
            return s.size();
        int maxi = INT_MIN;
        while(r<s.size())
        {
            if(l==r)
            {
                mp[s[r]]++;
                r++;
            }
            else if(mp.find(s[r]) == mp.end())
            {
                mp[s[r]]++;
                r++;
            }
            else
            {
                auto it = mp.find(s[l]);
                mp.erase(it);
                l++;
            }    
            maxi = max(maxi, r-l);
        }
        return maxi;
    }
};