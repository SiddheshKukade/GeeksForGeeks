
#include <string> // for string and to_string()
class Solution {
public:
    int PalinArray(int a[], int n)
    {
        //first we will convert the numbers in string type
        // then we'll check one  by one if it is palindromic or not.
        for(int i=0 ; i<n;i++){
            string number = to_string(a[i]); // 111 -> "111"
            int j=number.length()-1;
            int init =0;
            while(init<j){
                if(number.at(init) != number.at(j)){
                  return 0;}
                  init++;
                j--;
            }
        }
           return 1;
    }
};
