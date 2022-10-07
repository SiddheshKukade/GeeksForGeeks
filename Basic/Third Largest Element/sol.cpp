class Solution{
  public:
    int thirdLargest(int arr[], int n)
    {
    //   int a=0,b=0,c=0;
    //   for(int i=0; i<n;i++){
    //       if(arr[i]  > a && arr[i] > b ){
    //          a=arr[i];
    //       }else if (arr[i]  < a && arr[i] > b ){
    //           b=arr[i];
    //       }else  if(arr[i] <a && arr[i] < b && arr[i] > c){
    //           c = arr[i];
    //       }
    //   }
    //   return c;
    sort(arr, arr+n);
    return arr[n-3];
    }

};
