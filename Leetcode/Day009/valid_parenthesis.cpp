class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if(st.empty())
                {
                    return false; cout<<"1";
                }
                
                switch(s[i])
                {
                    case ')':
                        if(st.top() != '(')
                            return false;
                        break;
                    case '}':
                        if(st.top() != '{')
                            return false;
                        break;
                    case ']':
                        if(st.top() != '[')
                            return false;
                        break;
                    default:    break;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
