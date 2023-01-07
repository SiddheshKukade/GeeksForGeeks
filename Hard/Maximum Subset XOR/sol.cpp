class Solution
{
    public:
    // JAVA TLE SOL
     // using gaussian elimination to save time
        // XOR when input are not same it gives 1
        // Start from MSB find set bits in numbers and XOR them.
        
        // int index=0;
        
        // for(int i=31; i>=0; i-- ){// reverse 31 to 0 
        //     int maxele = Integer.MIN_VALUE;
        //     int maxindex = index;
            
        //     for(int j=index; j<arr.length; j++){ // iterate over all nos
        //         int setbit = (arr[j] >> i) &1; // iterating over the bits of the current element
                
        //         if(setbit !=0 && maxele< arr[j]){ // if current bit is set and ele and it is larger than current max number
        //             maxele = arr[j]; // make it max
        //             maxindex= j; // set curr  idx as maxidx
        //         }
        //     }
        //     if(maxele == Integer.MIN_VALUE){
        //         continue; // if new max is not added then go to the next number
        //         //and skip below part
        //     }
        //     // exchaning places of curr idx and maxidx
        //     int temp = arr[index]; // temp has the current element
        //     arr[index] = arr[maxindex]; //
        //     arr[maxindex] = temp;
            
        //     maxindex=  index; // set max idx as curridx
            
        //     for(int j=0; j<n; j++){
                
        //         int setbit= (arr[j]>>i)&1;
                
        //         if(setbit!=0 && j!=maxindex){//if bit is set and j is not already added as
        //             arr[j] = arr[j] ^ arr[maxindex];
        //         }
        //     }
        //     index++;
        // }
        // int ans=0;
        // for(int ele:arr){
        //     ans = ans ^ ele;
        // }
        // return ans;
    int maxSubsetXOR(int arr[], int N)
    {
          if(N == 0) return 0; // if no input

       int num = 0; // it is the max XOR

       while(true)
       {
           //first find max element
         int maxi = INT_MIN;
         for(int i=0;i<N;i++){ // iterate over all nos
             if(maxi<arr[i])
             maxi=arr[i]; // get the max no out of them
         }
         if(maxi == 0) //if all zeros present 
         return num; //return ans 0
         num = max(num,num^maxi); //store the max between curr num and it's XOR with max
         for(int i=0;i<N;i++){
           arr[i] = min(arr[i],arr[i]^maxi); //store the min between arr[i] and it's XOR with max
         }
       }
    }
};
