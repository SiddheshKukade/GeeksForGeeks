
class Solution{
public:
    int inSequence(int A, int B, int C){
       if(A==B) return 1;
       
       // if increasing order.and diff is postive and then mod diff with C if zero then return 1
        if( C>0 && (B-A)>0 && ((B-A)% C)==0) return 1;
        //same logic for negative order
        if( C<0 && (B-A)<0 && ((B-A)% C)==0) return 1;
        return 0;
    //   A - first term
    //   c - common sequence
    //   B -  item to check if it exists
    //  1 3 6 9 12 15
    //  1 4 7 10
    
    }
};
