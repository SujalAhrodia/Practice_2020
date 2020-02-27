// first solution (with extra space), low time complexity

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        multimap<int, int> mmap;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]==0)
                    mmap.insert({i,j});
            }
        }
        
        for(auto itr=mmap.begin(); itr!=mmap.end(); itr++)
        {
            int i=itr->first;
            int j=itr->second;
            
            cout<<i<<":"<<j<<endl;
            //convert the row
            for(int x=0; x<n; x++)
                matrix[i][x]=0;
            
            //convert the column
            for(int x=0; x<m; x++)
                matrix[x][j]=0;
        }
    }
};

// without extra space (high time complexity)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        bool firstrow=false, firstcol=false;
        
        //first column
        for(int i=0; i<m; i++)
        {
            if(matrix[i][0]==0)
                firstcol=true;
        }
        
        //first row
        for(int i=0; i<n; i++)
        {
            if(matrix[0][i]==0)
                firstrow=true;
        }
        
        //setting flags for every row and col
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        //checking and setting the value
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
        }
        
        if(firstcol)
        {
            for(int i=1; i<m; i++)
                matrix[i][0]=0;
        }
        if(firstrow)
        {
            for(int i=1; i<n; i++)
                matrix[0][i]=0;
        }
    }
};
