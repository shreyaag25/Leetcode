class Solution {
public:
    bool checkString(string s) {
        int f = 0;
        int i;
        for(i =0; i<s.size(); i++)
        {
            if(s[i]=='b')
            {
                f = i;
                break;
            }
        }
        if(i == s.size() && f==0)
            return true;
        for(i = f;i<s.size();i++)
            if(s[i]=='a')
                return false;
        return true;
    }
};