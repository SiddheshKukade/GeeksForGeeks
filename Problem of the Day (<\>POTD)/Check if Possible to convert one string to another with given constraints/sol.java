
class Solution {
    int isItPossible(String S, String T, int M, int N) {
        if(M!= N ) return 0;
        int a =0; 
        int b=0;
        
        for(int i=0 ;  i<N; i++){
            if(S.charAt(i) == 'A'){
                a++;
            }else if (S.charAt(i) =='B'){
                b++;
            }
             if(T.charAt(i) == 'A'){
                a--;
            }else if (T.charAt(i) =='B'){
                b--;
            }
        }
        
    if(a!=0 || b != 0)return 0; //base case to check if A and B are not equal
    
    int i=0; 
    int j=0;
    
    while(i<N && j<N){
        while(i<N && S.charAt(i) == '#') i++; // ignore the hashes
        while(j<N && T.charAt(j) == '#') j++;
        //if all hash
        if( i==N || j== N ) break;
        
        if(S.charAt(i) =='A'){
            if(T.charAt(j) =='A'){
                    if(j>i) {return 0 ;} //A unable to move right}
                    else{ // then all OK
                        i++;
                        j++;
                    }
            
            }else{ 
                return 0;  // A B intercrossing} 
        }}else{
            if(T.charAt(j) == 'B'){
                    if(j<i) { return 0 ; }//A unable to move right}
                    else{ // then all OK
                        i++;
                        j++;
                     }
            }else{ 
                return 0;
            }
          }
        }
        return 1;
    }
       
};
