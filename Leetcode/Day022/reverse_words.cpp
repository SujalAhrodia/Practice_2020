/* first solution

in-built functions: reverse(str.begin(), str.end()) , isspace(char)
*/

class Solution {
public:
    string reverseWords(string s) 
    {
        string rev="";
        
        int i=0;
        
        while(i<s.length())
        {
            int j=i;
            string temp;

            while(!isspace(s[j]) && j<s.length())
            {
                temp+=s[j];
                j++;
            }
            //in-built reverse function
            reverse(temp.begin(), temp.end());
            rev+=temp;
            if(j!=s.length())
                rev+=" ";
            i=j+1;
        }
        return rev;
    }
};

// second solution using stringstream

class Solution {
public:
    string reverseWords(string s) 
    {
        string rev="";
        
        stringstream ss(s);
        string word;
        
        while(ss>>word)
        {
            reverse(word.begin(), word.end());
            rev+=word+' ';
        }
        //removing the last space
        rev.pop_back();
        return rev;
    }
};


// optimized solution (in-place)

class Solution {
public:
    string reverseWords(string s) 
    {
        int j=0;
        
        for(int i=0; i<=s.length(); i++)
        {
            if(isspace(s[i]) || i==s.length())
            {
                reverse(s.begin()+j, s.begin()+i);
                j=i+1;
            }
        }
        return s;
    }
};
