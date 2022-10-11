class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        //answer pattern is Greater - smaller
        // G S G S 
        int temp;
        for(int i=0 ; i<n; i+=2){
            if(arr[i] < arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        // Your code here
        
    }
};
