class Solution {
public:
    void swapRow(vector<vector<int>>& score, int maxi, int i)
    {
        for(int j = 0; j<score[0].size(); j++)
        {
            swap(score[maxi][j] , score[i][j]);
        }
    }

    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for (int i =0 ; i<score.size(); i++)
        {
            int maxi = i;
            for(int j = i+1; j<score.size(); j++)
            {
                if(score[maxi][k] < score[j][k])
                    maxi = j;
            }
            swapRow(score, maxi, i);
        }
        return score;
    }
};