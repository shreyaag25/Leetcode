class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> temp;
        for(int i = 0; i < mat.size() ; i++)
        {
            int c1 = 0;
            for(int j = 0; j<mat[0].size(); j++)
            {
                if(mat[i][j]==1)    
                    c1++;
                if(mat[i][j]==0)
                    break;
            }
            temp.push_back({c1,i});
        }
        sort(temp.begin(), temp.end());
        vector<int> ans;
        for(int i = 0; i<k ; i++)
            ans.push_back(temp[i].second);
        return ans;
    }
};