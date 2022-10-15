// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        ///GENERATING A MAX HEAP
        int largest = i; // initializing largest as root
        
        int l = 2*i +1; // left
        int r = 2*i+2; // right
        //if left child is larger than the largest so far;
        if(l<n && arr[l]> arr[largest])
            largest=l;
        //if right is larger than largest so far.
        if(r<n && arr[r] > arr[largest]){
            largest = r;
        }
        //if largest is not the root
        if(largest!= i){
            //swap the largest with the root position
            swap(arr[i], arr[largest]);
            //recursively heapify the affected sub-tree
            //because  there an be value greater than current number
            heapify(arr,n,largest);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    for(int i =(n-2)/2; i>= 0;i--){
        heapify(arr,n,i);
    }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
      buildHeap(arr,n);
      for(int i=n-1 ; i>=1;i--){
          swap(arr[0], arr[i]);
          //providing i as size and 0 is size for which we're calling heapify
          heapify(arr,i,0);
      }
    }
};

