// first solution

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        for(int i=0,j=s.size()-1; j>i; i++, j--)
        {
            char temp;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};

// short solution

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        reverse(s.begin(), s.end());
    }
};
