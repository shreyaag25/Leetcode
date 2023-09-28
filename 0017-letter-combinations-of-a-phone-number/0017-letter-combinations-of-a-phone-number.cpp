class Solution {
public:

    void solve(int index, string ds, vector<string> &ans, string digits, vector<string> mapping)
    {
        if(index==digits.size())
        {
            ans.push_back(ds);
            return;
        }
        int number = digits[index]-'0';
        string val = mapping[number];
        for(int i = 0; i<val.size(); i++)
        {
            ds.push_back(val[i]);
            solve(index+1, ds, ans, digits, mapping);
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> mapping = {"","","abc","def","ghi", "jkl", "mno", "pqrs","tuv","wxyz"};
        int index = 0;
        string ds;
        vector<string> ans;
        if(digits.size() == 0)
            return ans;
        solve(index, ds, ans, digits, mapping);
        return ans;
    }
};