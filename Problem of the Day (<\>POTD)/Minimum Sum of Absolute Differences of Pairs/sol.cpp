
class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        //the ideas is we are sorting both the arrays so that we can subtract thier equal comparable values
        //the we subtract each element on by one 
        long long sum=0;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        for(int i=0;i<N; i++){
            sum += abs(A[i] - B[i]); 
        }
        return sum;
    }
};
