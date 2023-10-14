class Solution {
public:
    string reverseWords(string s) {
        string ans;
        if(s.size() == 1)
            return s;
        for(int i = s.size()-1; i>0; )
        {
            while(i>=0 && s[i]==' ')
                i--;
            int end = i;
            while(i>=0 && s[i]!=' ')
                i--;
            int start = i+1;
            ans.append(s.substr(start, end-start+1));
            ans.push_back(' ');
        }
        while(!ans.empty() && ans.back()== ' ')
            ans.pop_back();
        return ans;
    }
};