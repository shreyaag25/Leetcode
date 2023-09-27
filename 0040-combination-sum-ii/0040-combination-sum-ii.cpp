class Solution {
public:
    void solution(int index, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int> &candidates)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i = index; i<candidates.size(); i++)
        {
            if(i> index && candidates[i]==candidates[i-1])
                continue;
            if(target<candidates[i])
                break;
            ds.push_back(candidates[i]);
            solution(i+1, target-candidates[i], ds, ans, candidates);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int index;
        vector<int> ds;
        vector<vector<int>> ans;
        solution(index,  target, ds, ans, candidates);
        return ans;
    }
};