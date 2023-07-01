    int countBitsFlip(int a, int b){
        
        // Your logic here
        int temp= a ^b;
        int count =0;
        
        while(temp !=0 ){
            if(temp&1) 
                count++;
            temp >>= 1;
        }
        return count;
    }
