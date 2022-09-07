
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
       int mid , lower=0 , upper=n;
      
         while(n){
               mid =(upper +lower) /2;
           if (arr[mid]==k){
               return mid;
           }
           else if(arr[mid] > k){
               upper = mid;
           }else if(arr[mid] < k){
               lower = mid ;
           }
           n=n/2;
       }
       return -1;
    }
};
