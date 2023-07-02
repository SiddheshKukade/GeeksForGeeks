class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
         // code here
        int temp = 0;
        for(int i=l-1;i<r;i++)
        {
            temp|=1<<i;
            
        }
        y&=temp;
        x|=y;
        return x;
    }
};
