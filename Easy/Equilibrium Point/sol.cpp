class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        
        if(n==1)
            return 1;
        
        long totalSum=0;
        long res=-1;
        long sum=0;
        
        for(int i=0; i<n;i++){
            totalSum+=arr[i];
        }
        for(int i=1;i<n;i++){
            sum=sum+arr[i-1];
            if(totalSum -sum- arr[i] == sum){
                res=i;
                break;
            }
        }
        return res== -1 ? -1:res+1;
        // int start=0;
        // int last = n-1;
        // int sumStart=0;
        // int sumEnd=0;
        // int ans=0;
        // while(start<last){
        //     sumStart+=a[start];
        //     sumEnd+=a[last];
        //     start++;
        //     last--;
        //     ans++;
        // }
        // if(sumStart == sumEnd){
        //     return ans+1;
        // }
        // return -1;
    }

};
