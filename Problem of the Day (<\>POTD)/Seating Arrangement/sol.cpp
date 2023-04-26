
class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
         int c=0;
        for(int i=0;i<m;i++){ // over all seats
            if(seats[i]==0){ //if current seat is not occupied
                if(i==0){// for the first index
                    if(seats[1]==0){ //
                        c++;
                        seats[i]=1; // placed 
                    }
                }
                else if(i==m-1){ // for the last index
                    if(seats[i-1]==0){ // if 
                        c++;
                        seats[i]=1;
                    }
                }
                else{ // for middle seats
                     if(seats[i-1]==0 && seats[i+1]==0){
                     c++;
                     seats[i]=1;
                         
                     }
                }
            }
        }
        return c>=n; // if occupied seats are enough for no of people or not
    }
};
