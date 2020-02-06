// in-line explanantion

class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t r = 0;
        
        //used for tracking the position
        int i=0;
        
        while(n>0)
        {
            //left shift r
            r<<=1;

            //check if LSB if 0:1
            r^=(n&1);
            
            //right shift n
            n>>=1;
            
            i++;
        }
        
        //left shift the remaining digits.(i.e. total=32)
        while(i<32)
        {
            r<<=1;
            i++;
        }
        return r;
    }
};
