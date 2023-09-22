class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp, m;
        for(auto ch : magazine)
            mp[ch]++;
        for(auto ch: ransomNote)
            m[ch]++;
        for(auto ch: ransomNote)
        {
            if(m[ch]> mp[ch])
                return false;
        }
        return true;
    }
};