// same idea without space constraint

class Solution {
public:
    void helper(vector<char>& s, int i, int j)
    {
        while(i<j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++; j--;
        }
    }
    void reverseWords(vector<char>& s) 
    {
        int i=0, n=s.size();
        
        while(i<n)
        {
            int j=i;
            
            //capture the word
            while(j<n && !isspace(s[j]))
                j++;

            //reverse the word
            helper(s, i, j-1);
            
            //could use this in-built func as well
            //reverse(s.begin()+i, s.begin()+j);
            
            i=j+1;
        }
        reverse(s.begin(), s.end());
    }
};
