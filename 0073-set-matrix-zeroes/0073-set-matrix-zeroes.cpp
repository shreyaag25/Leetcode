class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> colArray(cols,0);
        vector<int> rowArray(rows,0);
        for(int i = 0 ; i< rows ; i++)
        {
            for(int j = 0; j<cols ; j++)
            {
                if(matrix[i][j]==0)
                {
                    rowArray[i] = 1;
                    colArray[j] = 1;
                }
            }
                
        }
        for(int i = 0 ; i< rows; i++)
        {
            for(int j = 0; j<cols; j++)
            {
                if(rowArray[i]==1 || colArray[j]==1)
                    matrix[i][j]=0;
            }
        }
        
    }
};