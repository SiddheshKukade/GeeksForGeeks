
class Solution {

    ArrayList<Integer> findSubarray(int a[], int n) {
        //Find out the maximum sub-array of non negative numbers from an array.
        // Kidens algorithm is used here it is used for maximun sub arrays.
        int maxSum  =0; 
        int currSum =0;
        int maxStart =0;
        int maxEnd=0; // should be 1 more than then end top compenstate with the library method 
        int currStart=0;
        for(int i=0; i<n; i++){
            if(a[i]<0) { // if negative numbers
                currSum =0;
                currStart = i +1; 
            }else{ // for positive numbers
                currSum += a[i];
            }
            if(currSum > maxSum){  // new max sum found 
            // if found greater subarray
            // the store it in max and update the maxend Index
                maxSum = currSum;
                maxStart = currStart;
                maxEnd= i+1;
            }else if (currSum >= maxSum){
                // if max are same then now check according to the distance
                int currDis = i + 1- currStart;
                int maxDis = maxEnd- maxStart;
                if (currDis> maxDis){
                    maxStart = currStart;
                    maxEnd = i+1;
                }
            }
        }
        ArrayList <Integer> ans = new ArrayList<>();
        for(int i= maxStart; i<maxEnd; i++){
            ans.add(a[i]);
        }
        // BASE CASE : if not ans return -1
        if(ans.size() ==0 ) {
            ans.add(-1);
        }
        return ans; // inser the  ans array and return it 
        
        
    }
}                
