class TicTacToe {
public:
    /** Initialize your data structure here. */
    vector<vector<int>> grid;
    TicTacToe(int n) 
    {
        grid.resize(n);
        
        for(int i=0; i<n; i++)
            grid[i].resize(n);
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    bool check(int player, int r, int c)
    {
        int val = (player==1 ? 1:2);
            
        bool p=true;
        
        //diagnol
        for(int i=0; i<grid.size(); i++)
        {
            if(grid[i][i] != val)
            {
                p=false; 
                break;
            }
        }

        if(p)
            return p;
        
        //row
        p=true;
        for(int i=0; i<grid.size(); i++)
        {
            if(grid[r][i] != val)
            {
                p=false;
                break;
            }
        }
        if(p)
            return p;
        
        //col
        p=true;
        for(int i=0; i<grid.size(); i++)
        {
            if(grid[i][c] != val)
            {
                p=false;
                break;
            }
        }
        if(p)
            return p;
        
        //second diagnol
        p=true;
        for(int i=0; i<grid.size(); i++)
        {
            if(grid[i][grid.size()-i-1] != val)
            {
                p=false; 
                break;
            }
        }
        return p;
    }
    int move(int row, int col, int player) 
    {
        if(player==1)
            grid[row][col]=1;
        else if(player==2)
            grid[row][col]=2;
        
        
        if(check(player, row, col))
            return player;
        return 0;
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */
