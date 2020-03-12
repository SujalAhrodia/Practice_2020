/*
Intuition:

1. You need to check for every (char) digit in the input
2. Iterate over the existing/previous string combinations formed
3. Append every existing combination with the multiple chars of the number in a map("abc" etc.)
*/

class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        if(!digits.length())   
            return {};
        
        //mapping 
        vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans = {""};
        
        //input digit
        for(char d : digits)
        {
            vector<string> temp;
            //existing strings
            for(string s : ans)
            {
                //mapping of digit
                for(char m : map[d-'0'])
                    temp.push_back(s+m);
            }
            ans = temp;
            temp.resize(0);
        }
        return ans;
    }
};
