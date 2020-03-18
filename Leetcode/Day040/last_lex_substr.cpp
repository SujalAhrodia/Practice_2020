/* first solution (slow but simple)

string_view:?

The idea is always to store a pair of pointer-to-first-element and size of some existing data array or string.

Such a view-handle class could be passed around cheaply by value and would offer cheap substringing operations 
(which can be implemented as simple pointer increments and size adjustments).

*/

class Solution {
public:
    string lastSubstring(string_view s) 
    {
        string_view ans="";
        for(int i=0; i<s.length(); i++)
        {
            if(s.substr(i) > ans )
                ans=s.substr(i);
        }
        return (string)ans;
    }
};

// optimized solution

class Solution {
public:
    string lastSubstring(string s) 
    {
        int n = s.length();
        int i=0,j=i+1,k=0;
        
        while(j+k<n)
        {
            //keep checking
            if(s[i+k] == s[j+k])
                k++;
            
            //discard the first string
            else if(s[i+k] < s[j+k])
            {
                i=j;
                j++;
                k=0;
            }
            //discard the latter string
            else
            {
                j=j+k+1;
                k=0;
            }
        }
        return s.substr(i);
    }
};
