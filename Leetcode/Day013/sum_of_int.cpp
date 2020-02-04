// without negative numbers
class Solution {
public:
    int getSum(int a, int b) {

        while(b!=0)
        {
            int carry = a&b;
            a = a^b;
            
            b = carry<<1;
        }

        return a;
    }
};

// with negative number
class Solution {
public:
    int getSum(int a, int b) {

        while(b!=0)
        {
            int carry = a&b;
            a = a^b;
            
            b = (unsigned int)carry<<1;
        }

        return a;
    }
};
