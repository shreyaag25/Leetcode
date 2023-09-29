class Solution {
public:

    // bool isSafe(int col, int row, vector<string> &board, int n)
    // {
    //     int dupRow = row; 
    //     int dupCol = col;
    //     //check upper diagonal
    //     while(row>=0 && col>=0)
    //     {
    //         if(board[row][col]=='Q')
    //             return false;
    //         row--;
    //         col--;
    //     }
    //     row = dupRow;
    //     col = dupCol;
    //     //check left row
    //     while(col>=0)
    //     {
    //         if(board[row][col]=='Q')
    //             return false;
    //         col--;
    //     }
    //     col = dupCol;
    //     row = dupRow;
    //     //check lower diagonal
    //     while(col>=0 && row<n)
    //     {
    //         if(board[row][col]=='Q')
    //             return false;
    //         col--;
    //         row++;
    //     }
    //     return true;
    // }

    // void solve(int col, int n ,vector<string> &board, vector<vector<string>> &ans)
    // {
    //     if(col==n)
    //     {
    //         ans.push_back(board);
    //         return;
    //     }
    //     for(int row =0;row<n;row++)
    //     {
    //         if(isSafe(col, row, board , n))
    //         {
    //             board[row][col]='Q';
    //             solve(col+1, n, board, ans);
    //             board[row][col]='.';  //backtrack(going back)
    //         }
    //     }
    // }
    // vector<vector<string>> solveNQueens(int n) {
    //     vector<vector<string>> ans;
    //     vector<string> board (n);
    //     string s(n, '.');
    //     for(int i =0;i<n;i++)
    //         board[i]= s;
    //     solve(0, n, board, ans);
    //     return ans;
    // }


    void solve(int col, int n ,vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row =0;row<n;row++)
        {
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0)
            {
                board[row][col]='Q';
                leftRow[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1+col-row]= 1;
                solve(col+1, n, board, ans,leftRow, upperDiagonal, lowerDiagonal);
                board[row][col]='.';  //backtrack(going back)
                leftRow[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1+col-row]= 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board (n);
        string s(n, '.');
        for(int i =0;i<n;i++)
            board[i]= s;
        vector<int> leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        solve(0, n, board, ans,leftRow, upperDiagonal, lowerDiagonal);
        return ans;
    }
};