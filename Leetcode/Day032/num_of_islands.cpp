/*

Consider the grid as directed graph, where grid[i][j] tells if there is an edge between them.
Every start of DFS will mark a new island
DFS calls: check in every direction and keep marking the visiting nodes as '0' to not visit them again.

*/

class Solution {
public:
    void helper(vector<vector<char>>& grid, int i, int j)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        
        grid[i][j]='0';
        
        //down
        if(i+1<rows && grid[i+1][j]=='1')
            helper(grid, i+1, j);
        //right
        if(j+1<cols && grid[i][j+1]=='1')
            helper(grid, i, j+1);
        //left
        if(j-1>=0 && grid[i][j-1]=='1')
            helper(grid, i, j-1);
        //up
        if(i-1>=0 && grid[i-1][j]=='1')
            helper(grid, i-1, j);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int rows = grid.size();
        
        if(!rows)
            return 0;
        
        int ans=0;
        int cols = grid[0].size();
        
        //traversing the grid
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    helper(grid, i, j);
                }
            }
        }
        return ans;
    }
};
