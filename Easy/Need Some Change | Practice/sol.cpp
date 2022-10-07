class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
     int a=0,b;
    //  a = arr[0];
    //  b = arr[1];
    //  for(int i=0 ; i<sizeof_array-2 ; i++){
    //      arr[i] = arr[i+2];
    //  }
    //  arr[sizeof_array -1] = a;
    //  arr[sizeof_array -2 ]= b;
     for(int i=0 ; i<sizeof_array-2 ; i++){
          a=arr[i];
         arr[i] =arr[i+2];
         arr[i+2]=a;
     }
    }
};
