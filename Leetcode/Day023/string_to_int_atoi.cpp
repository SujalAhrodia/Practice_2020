/*

Imp to remember: erasing string mechanism | isdigit() | str.erase()

*/

class Solution {
public:
    int myAtoi(string str) 
    {
        long long int ans=0;
        string temp=str;
        bool pos=true;
        
        while(temp[0]==' ')
            temp.erase(temp.begin());
        
        if(temp[0]=='-' || temp[0]=='+')
        {
            if(temp[0]=='-')
                pos=false;
            temp.erase(temp.begin());
        }
        
        for(char ch:temp)
        {
            if(!isdigit(ch))
                break;
            
            ans=ans*10+(ch-'0');
            
            if(ans>INT_MAX)
            {
                if(!pos)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
        }
        
        if(!pos)
            ans=-ans;
        return ans;
    }
};
