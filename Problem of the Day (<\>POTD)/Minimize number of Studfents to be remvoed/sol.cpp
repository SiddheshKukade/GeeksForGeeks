class Solution {
  public:
    int removeStudents(int H[], int N ){
        // code here
        vector<int> updated;
        for(int i=0; i<N ;i++){
            int j=0 ;
            // this makes sure that all smaller elements are avaialable before the ith
            while(j < updated.size() && updated[j] < H[i] ) j++; // if all ok keep moving
            
            if(j==updated.size()) updated.push_back(H[i]); //if j goes to end then add that height to updated
            else updated[j] = H[i]; // if greater no then add it later
        }
        return N - updated.size();
    }
};
