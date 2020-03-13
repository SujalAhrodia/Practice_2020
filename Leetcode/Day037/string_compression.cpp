class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int i=0, j=0;
        
        while(i<chars.size())
        {
            chars[j] = chars[i];
            
            int count=0;
            while(i<chars.size() && chars[i]==chars[j])
            {
                count++; i++;
            }
            
            if(count>1)
            {
                string temp = to_string(count);
                
                for(char t: temp)
                    chars[++j]=t;
            }
            j++;
        }
        return j;
    }
};
