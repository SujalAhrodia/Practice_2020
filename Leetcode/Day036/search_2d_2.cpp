// first solution

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

// binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        
        if(!m)
            return false;
        
        //starting with the first element
        int i=0;
        
        while(i<m)
        {
            int n=matrix[i].size();
            
            if(!n)
                return false;
            
            int j=i;
            // cout<<i<<":"<<j<<endl;
            
            if(i<m && j<n)
            {
                if(target == matrix[i][i])
                    return true;
                
                else if(target > matrix[i][i])
                {
                    if(target <= matrix[i][n-1])
                    {
                        //search row
                        int start=i, end=n-1;
                        while(start<=end)
                        {
                            int mid = start+(end-start)/2;

                            if(target==matrix[i][mid])
                                return true;
                            else if(target >= matrix[i][mid])
                                start=mid+1;
                            else
                                end=mid-1;
                        }  
                    }
                    if(target <= matrix[m-1][j])
                    {
                        //search coloumn
                        int start=i, end=m-1;

                        while(start<=end)
                        {
                            int mid = start+(end-start)/2;

                            if(target==matrix[mid][j])
                                return true;
                            else if(target >= matrix[mid][j])
                                start=mid+1;
                            else
                                end=mid-1;
                        }
                    }
                }
                    
            }
            i++;            
        }
        return false;
    }
};

// optimized solution 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        //start in the bottom-left
        int m=matrix.size()-1, n=0;
        
        while(m>=0 && n<matrix[m].size())
        {
            if(target == matrix[m][n])
                return true;
            else if(target < matrix[m][n])
                m--;
            else 
                n++;
        }
        return false;
    }
};
