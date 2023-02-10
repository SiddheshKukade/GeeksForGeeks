class Solution {
    int remove_duplicate(int A[],int N){
        // code here
         int i = 0 ; int j = 1;
          while(j<N)
      {
          if(A[i] != A[j])
          {
              A[i+1] = A[j];
              i++; // count of distinct numbers.
          }
          j++;
      }

      return i+1;
    }
}
