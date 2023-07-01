    int countSetBits(int n)
    {
        if(n==0){
            return 0;
        }
        
        long x = larPowof2(n);
        long y = x * ( 1 << (x-1));
        long z = n - (1 << x);
        return y+ z + 1+ countSetBits(z);

    }
    int larPowof2(int n ){
        long x=0;
        while((1 <<x )<= n){
            x++;
        }  
        return x-1;
    }
        
