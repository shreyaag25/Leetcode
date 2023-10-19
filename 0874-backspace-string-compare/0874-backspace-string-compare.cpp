class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a, b;
        for(auto ch: s)
        {
            if(ch!='#')
                a.push_back(ch);
            else if(a.size()>=1)
                a.pop_back();
        }
        for(auto ch: t)
        {
            if(ch!='#')
                b.push_back(ch);
            else if(b.size()>=1)
                b.pop_back();
        }
        if(a.size()!= b.size())
            return false;
        for(int i = 0; i<a.size(); i++)
        {
            if(a[i] != b[i])
                return false;
        }
        return true;
    }
};