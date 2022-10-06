class Solution{   
public:
    string compareNum(int A,int B){
        string str = to_string(A)+" is equals to "+to_string(B);
        if(A>B){
        str =to_string(A)+" is greater than "+to_string(B);
        }else if(B>A){
            str=to_string(A)+" is less than "+to_string(B);
        }
return str;
//   if(A==B)
//       return to_string(A)+" is equals to "+to_string(B);
//       return (A>B)?(to_string(A)+" is greater than "+to_string(B)):(to_string(A)+" is less than "+to_string(B));
    }
};
