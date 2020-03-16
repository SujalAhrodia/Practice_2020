class Solution {
public:
    int helper(vector<vector<int>>& grid, int i, int j)
    {
        int mid=1;
        int m = grid.size();
        int n = grid[0].size();
        
        grid[i][j]=0;
        
        //left
        if(j-1>=0 && grid[i][j-1]==1)
            mid+=helper(grid, i, j-1);
        
        //right
        if(j+1<n && grid[i][j+1]==1)
            mid+=helper(grid, i, j+1);
        
        //up
        if(i-1>=0 && grid[i-1][j]==1)
            mid+=helper(grid, i-1, j);
        
        //down
        if(i+1<m && grid[i+1][j]==1)
            mid+=helper(grid, i+1, j);
        
        return mid;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int max=0;
        
        int m=grid.size();
        
        if(!m)
            return max;
        
        int n=grid[0].size();
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==1)
                {
                    int temp=helper(grid, i, j);
                    if(temp>max)
                        max=temp;
                }
            }
        }
        return max;
    }
};
