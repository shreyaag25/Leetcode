//tc - O(n*m)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int cols=matrix[0].size();
        vector<int> ans;
        int count=0, total=row*cols;

        //index initialisation
        int starting_row=0, starting_col=0;
        int ending_row=row-1, ending_col=cols-1;

        while(count<total)
        {
            //print starting row
            for(int index=starting_col;count<total && index<=ending_col;index++){
                ans.push_back(matrix[starting_row][index]);
                count++;    
            }
            starting_row++;

            //print ending col
            for(int index=starting_row;count<total && index<=ending_row;index++){
                ans.push_back(matrix[index][ending_col]);
                count++;
            }
            ending_col--;

            //print ending row
            for(int index=ending_col;count<total && index>=starting_col;index--){
                ans.push_back(matrix[ending_row][index]);
                count++;
            }
            ending_row--;

            //print starting col
            for(int index=ending_row;count<total &&index>=starting_row;index--){
                ans.push_back(matrix[index][starting_col]);
                count++;
            }
            starting_col++;

        }
        return ans;
    }
};