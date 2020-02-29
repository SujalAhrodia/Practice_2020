// idea: simple traversing with 4 limits in each direction

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int m = matrix.size();
        if(!m)
            return ans;
        int n = matrix[0].size();
        
        if(!n)
            return ans;
        
        int up=0, down=m-1, left=0, right=n-1;

        while(up<=down && left<=right)
        {
            //right
            for(int i=left; i<=right; i++)
                ans.push_back(matrix[up][i]);
            
            //reducing limit
            if(++up > down)
                break;
            
            //down
            for(int i=up; i<=down; i++)
                ans.push_back(matrix[i][right]);
            
            //reducing limit
            if(--right < left)
                break;
            
            //left
            for(int i=right; i>=left; i--)
                ans.push_back(matrix[down][i]);
            
            //reducing limit
            if(--down < up)
                break;
            
            //up
            for(int i=down; i>=up; i--)
                ans.push_back(matrix[i][left]);
            
            //reducing limit
            if(++left > right)
                break;
        }
   
        return ans;        
    }
};
