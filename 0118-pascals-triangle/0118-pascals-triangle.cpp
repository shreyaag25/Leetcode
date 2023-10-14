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

    //brute force - O(row)
    int findelement(int row, int col)
    {
        //easiest formula -  (row-1)C(col-1)
        long long res = 1;
        for(int i = 0; i<col; i++)
        {
            res = res *(row-i);
            res = res/ (i+1);
        }
        return res;
    }

    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> ans;
        // ans.push_back({1});
        // if(numRows==1)
        //     return ans;
        // for(int i = 1 ; i<numRows; i++)
        // {
        //     vector<int> temp(i+1,1);
        //     for(int j = 1; j<i; j++)
        //     {
        //         temp[j] = ans[i-1][j] + ans[i-1][j-1]; 
        //     }
        //     ans.push_back(temp);
        // }
        // return ans;

        vector<vector<int>> ans;
        for(int i = 1; i<=numRows; i++)
        {
            vector<int> temp = print(i);
            ans.push_back(temp);
        }
        return ans;


        //given row and col return element
        //findelement(r-1,c-1);

        //print entire row when nth row is given
        // print(n);
    }
};