class Solution{   
public:
    string compareFive(int n){
        if(n==5){
            return "Equal to 5";
        }
        return n>5 ? "Greater than 5": "Less than 5" ;
    }
};
