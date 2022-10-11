class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
    for(int i=1 ; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0 )
        {
            arr[j+1] = arr[j];
                j--;
        }
        arr[j+1] = current;
    }
}
    
};
