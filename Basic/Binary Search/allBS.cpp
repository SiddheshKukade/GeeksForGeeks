
class Solution {
  public:
  int binarySearchRecursive(int arr[], int k , int l , int r ){
      if (l> r) return -1 ; //wrong entry
      else {
          int mid = (l + r) /2;
          if(arr[mid] == k) {
              return mid ;
          }
          else if (arr[mid] < k){
              return binarySearchRecursive(arr , k , mid+1, r);
          }
          else if (arr[mid] >k ){
              return binarySearchRecursive(arr , k , l, mid-1);
      }
      
      }
  }
    int binarysearch(int arr[], int n, int k) {
        // normal search
        // for(int i = 0 ; i<n  ;i++){
        //     if(arr[i] == k) return i;
        // }
        //Iteration Method 
//         int l= 0 ;
//         int r= n-1;
//         int mid=0;
//         if (arr[mid] == k) return mid; // if mid is the answer
//         while (l <= r) { 
// 		mid = (l + r) / 2; // calculate the mid on every iteration
//         if(k > arr[mid]) { // if value is on the upper side
//               l = mid +1; // shift the left side to element next to mid 
//         }else if(k < arr[mid]) { // if on lower side
//               r = mid -1; // adjust mid to before it
//         }
//     }
//         return -1 ; // if element is not matched

//      RECURSION METHOD 
       return binarySearchRecursive(arr, k, 0 , n-1 );
    }
};
