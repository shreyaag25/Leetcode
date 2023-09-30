class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0) 
            return 0;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int count = 0;
        for(int i =0 ; i<s.size() && count<g.size() ; i++)
        {
            if(s[i]>= g[count])
                count++;
        }
        return count;
    }
};