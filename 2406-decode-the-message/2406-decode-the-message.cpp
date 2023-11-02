class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        int j = 'a';
        for(auto ch : key)
        {
            if(ch!= ' ' && m.find(ch) == m.end())
            {
                m[ch] = j;
                j++;
            }
        }
        string s;
        for(auto ch : message)
        {
            if(ch == ' ')
                s.push_back(' ');
            else
                s.push_back(m[ch]);
        }
        return s;
    }
};