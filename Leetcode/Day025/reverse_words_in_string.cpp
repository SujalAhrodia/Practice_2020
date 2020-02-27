/*
optimized solution

idea: reverse each word, them reverse the whole string
tip: take care about managing the whitespaces*
*/

class Solution {
public:
    void helper(string& s, int i, int j)
    {
        while(i<j)
        {
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++; j--;
        }
    }
    string reverseWords(string s) 
    {
        int n=s.length(), i=0;
        
        //leading spaces
        while(isspace(s[i]))
        {
            s.erase(s.begin());
            n--;                
        }
        
        int j=n-1;
        
        //trailing spaces
        while(isspace(s[j]))
        {
            s.erase(s.begin()+j);
            n--;j--;                
        }

        while(i<n)
        {
            //using j only for words capture
            j=i;

            //capture word
            while(!isspace(s[j]) && j<n)
                j++;
            
            //reverse the word
            helper(s, i, j-1);
            
            i=j;
            
            //check middle space
            if(isspace(s[i]))
                i++;
            
            //remove extra middle spaces
            while(isspace(s[i]))
            {
                s.erase(s.begin()+i);
                n--;           
            }
        }
        reverse(s.begin(), s.end());
        
        return s;
    }
};
