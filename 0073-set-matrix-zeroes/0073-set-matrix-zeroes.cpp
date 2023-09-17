class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        // vector<int> colArray(cols,0);  --> matrix[0][...]
        // vector<int> rowArray(rows,0);  --> matrix[...][0]
        int col0 = 1;
        for(int i = 0 ; i< rows ; i++)
        {
            for(int j = 0; j<cols ; j++)
            {
                if(matrix[i][j]==0)
                {
                    //mark the ith row
                    matrix[i][0] = 0;
                    //mark the jth col
                    if(j!=0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
                
        }
        for(int i =1 ; i<rows;i++)
        {
            for(int j = 1; j<cols;j++)
            {
                if(matrix[i][j]!=0)
                    //check for col and row
                    if(matrix[0][j] == 0 || matrix[i][0]==0)
                        matrix[i][j] = 0;
            }
        }
        if(matrix[0][0] == 0)
            for(int j = 0 ; j<cols; j++)
                matrix[0][j] = 0;
        if(col0 == 0)
            for(int i =0;i<rows;i++)
                matrix[i][0] = 0;
        
    }
};