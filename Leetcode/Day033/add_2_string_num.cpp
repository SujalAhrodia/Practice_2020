class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int i = num1.length()-1;
        int j = num2.length()-1;
        
        string ans="";
        int carry=0;
        
        while(i>=0 || j>=0 || carry)
        {
            long int sum=0;
            if(i>=0)
            {
                sum+=num1[i]-'0';
                i--;
            }
            if(j>=0)
            {
                sum+=num2[j]-'0';
                j--;
            }
            sum+=carry;
            carry = sum/10;
            sum=sum%10;
            ans+=to_string(sum);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};


// using less vars(only carry)

class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int i = num1.length()-1;
        int j = num2.length()-1;
        
        string ans="";
        long int carry=0;

        while(i>=0 || j>=0 || carry)
        {
            if(i>=0)
            {
                carry+=num1[i]-'0';
                i--;
            }
            if(j>=0)
            {
                carry+=num2[j]-'0';
                j--;
            }
            ans+=to_string(carry%10);
            carry=carry/10;
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
