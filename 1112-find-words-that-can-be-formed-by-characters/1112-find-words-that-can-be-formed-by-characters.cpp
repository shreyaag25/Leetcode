class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> mp;
        for(auto ch: chars)
            mp[ch]++;
        int sum = 0;
        for(int i = 0 ; i<words.size() ; i++)
        {
            int f = 0;
            map<char, int> m;
            for(auto ch: words[i])
                m[ch]++;
            for(auto ch : words[i])
                if(m[ch]> mp[ch])
                    f=1;
            if(f==0)   
                sum+=words[i].size();
        }
        return sum;
    }
};