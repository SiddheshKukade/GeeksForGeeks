// User function template for C++
 class Solution {
  public:
    string findSum(string x, string y) {
        // Number in form of string are stored as ASCII code and to get the number back we hae to subtract it with ASCII of 0 that is 48
        // Coverting these numbers in ASCII code and then performing the addition
        //48 is ASCII of 0 
        // 5 - 48 + 3 -48 = 8 correct ans 
        // if carry occured do num %  10 = carry
        //add the carry in the next answer
        // if we are getting  consecutive zeros in answer then retrn only one zero
        
        int n1= x.length()-1 ;  // pointer for X
        int n2 = y.length() -1 ; // pointeer for Y
        string ans ;
        int c =0;
        while(n1>= 0 || n2>=0){ // the strings are not empty
            if(n1<0){ // if n1 i.e X is empty
                char a = ((y[n2] - 48 + c )% 10 )+48; // getting the ASCII number from string convert in int (-48) then adding carry(+c) and calculating future carry (%10) and then coverting it back to ASCII (+48)
                c =(c + y[n2] - 48) /10;  // calculating the carry
                ans.push_back(a);
                n2 --;
            }
            else    if(n2<0){  // if n2 i.e. Y is empyu
                char a = ((x[n1] - 48 + c )% 10 )+48; // calculating the carry 
                // getting the ASCII number from string convert in int (-48) then adding carry(+c) and calculating future carry (%10) and then coverting it back to ASCII (+48)
                c =(c + x[n1] - 48) /10;   // add with seon number
                ans.push_back(a);
                n1 --;
            }
            else {
                char a = ((x[n1] -48 + y[n2] -48 +c )%10) +48;
                c = (c+x[n1]-48 + y[n2]-48)/10;
                ans.push_back(a);
                n1--;
                n2--;
            }
            
        }
        if(c){ // if carry still exists and all strings are empty then push the carry in the answers
                ans.push_back(c+48);
            }
        int i =0 ; 
        int n =ans.length();
        reverse(ans.begin() , ans.end()); //reversing the answer in correect form 
        
        for(i =0 ; i< n; i++){
            if(ans[i]!= '0') break; //eliminating the forward zeros if they are occured 
        }
        if(i==n) return "0"; // returning single zero as a string
        return ans.substr(i , (int)ans.size() - i +1);
    }
};
