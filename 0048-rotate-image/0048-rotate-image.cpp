class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //step1 - transpose
        int n = matrix.size();
        for(int i =0; i<n-1; i++)
        {
          for(int j = i+1; j <n;j++)
          {
              swap(matrix[i][j], matrix[j][i]);
          }
        }
        //step 2 - reverse each row
        for(int i =0 ;i<n;i++)
          reverse(matrix[i].begin(), matrix[i].end());
        
    }
};