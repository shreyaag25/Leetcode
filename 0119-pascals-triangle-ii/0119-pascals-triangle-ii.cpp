class Solution {
public:
    vector<int> print(int n)
    {
        long long ans = 1;
        vector<int> res;
        res.push_back(1);
        for(int i = 1; i<n ; i++)
        {
            ans *= (n-i);
            ans/=i;
            res.push_back(ans);
        }
        return res;
    }

    vector<int> getRow(int rowIndex) {
        return print(rowIndex+1);
    }
};