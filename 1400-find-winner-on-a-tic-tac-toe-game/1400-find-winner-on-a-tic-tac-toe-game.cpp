class Solution {
public:

    bool check(vector<vector<char>> grid, char c)
    {
        for(int i = 0; i<3; i++)
        {
            if(grid[0][i] == c && grid[1][i] == c && grid[2][i] ==c)
                return true;
            if(grid[i][0] == c && grid[i][1] == c && grid[i][2] ==c)
                return true;
        }
        if((grid[0][0] == c && grid[1][1] == c && grid[2][2] ==c) || (grid[0][2] == c && grid[1][1] == c && grid[2][0] ==c))
            return true;
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> grid(3, vector<char> (3,'p'));
        for(int i =0;i<moves.size(); i++)
        {
            int a = moves[i][0];
            int b = moves[i][1];

            if(i%2==0)
                grid[a][b] = 'X';
            else
                grid[a][b] = 'O';
        }

        bool A = check(grid, 'X');
        bool B = check (grid, 'O');
        if(A)
            return "A";
        if(B)
            return "B";
        if(moves.size()==9)
            return "Draw";
        return "Pending";
    }
};