
class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int n)
    {
        int countEven=0 , countOdd=0;
        for(int i=0 ;i<n ;i++){
            if(arr[i] %2 ==0){
                countEven++;
            }else {
                countOdd++;
            }
        }
        cout<<countOdd<<" "<<countEven<<endl;
    }
};
