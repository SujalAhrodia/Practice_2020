class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int a1 = (C-A)*(D-B);
        int a2 = (G-E)*(H-F);
        
        //no intersection
        if(C<=E || B>=H || A>=G || D<=F)
            return a1+a2;
        
        return a1-((min(C,G) - max(A,E)) * (min(D,H) - max(B,F)))+a2;
    }
};
