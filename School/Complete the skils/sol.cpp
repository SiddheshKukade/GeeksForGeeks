class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        //one by one compare the values
        // int aa=0;
        // int bb=0;
        for(int i=0; i<3 ; i++){
            if(a[i] > b[i]){
                ca++;
            }else if (a[i] < b[i]){
                cb++;
            }
        }
        // ca=aa;
        // cb=bb;
        
    }
};
