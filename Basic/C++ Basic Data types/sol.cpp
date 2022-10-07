class Solution {
  public:
    int BasicDataType(string s) {
        // return sizeof(s);
        // here the main logic is to tell the size of the give INPUT
        // based on the size of the string so we are doing 
        if(s.length() ==1){
            if(s[0] >='0' && s[0] <='9')
            return sizeof(int);
            else 
            return sizeof(char);
        }else{
            for(int i=0 ; i<s.length(); i++){
                if(s[i]=='.'){
                    if((s.length()-1-i) >=6)
                      return sizeof(double);
                    else
                      return sizeof(float);
                }
            }
        }
        return sizeof(int); // if any other cases are not passed then it is definitely a 
        // int with more than 1 digit
  
