//first solution using find()
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for(int i=0; i<matrix.size(); i++)
        {
            int n=matrix[i].size();
            
            if(!n)
                break;
            if(target >= matrix[i][0] && target <= matrix[i][n-1])
            {
                if(find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end())
                    return true;      
            }
        }
        return false;
    }
};

// using binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size();
        
        if(!m)
            return false;
        
        for(int i=0; i<m; i++)
        {
            int n = matrix[i].size();
            
            if(!n)
                return false;
            
            if(target <= matrix[i][n-1] || target >= matrix[i][0])
            {
                //binary search
                int start=0, end = n-1;
                
                while(start<=end)
                {
                    int mid=start+(end-start)/2;
                    
                    if(matrix[i][mid]==target)
                        return true;
                    else if(target > matrix[i][mid])
                        start=mid+1;
                    else
                        end=mid-1;
                }
            }
        }
        return false;        
    }
};

// using binary seacrh over the complete matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size();
        
        if(!m)
            return false;
        
        int n = matrix[0].size();
        
        int start=0, end=m*n-1;            
        
        //binary search
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            int val = matrix[mid/n][mid%n];
            
            if(val==target)
                return true;
            else if(target < val)
                end=mid-1;
            else
                start=mid+1;
        }
        return false;
    }
};
