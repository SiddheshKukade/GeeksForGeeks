 class Solution {
      public:
        int findSingle(int N, int arr[]) {
          int i = 0;
          //sorting the array
          sort(arr, arr + N);
        //lopping but with even nos to match the couples
          for (int i = 0; i < N; i += 2) {
              //check if couples are matching
            if (arr[i] != arr[i + 1]) {
                //if not then return the answer
              return arr[i];
            }
          }
          //failure then return -1;
          return -1;
        }
    };
