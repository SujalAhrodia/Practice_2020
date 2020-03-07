// first solution
class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0)
            return false;
        while(n%2==0)
            n/=2;
        return n==1;
    }
};

// bitwise solution

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0)
            return false;
        long temp=n;
        
        return (temp & (temp-1) )==0;
    }
};
