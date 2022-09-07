
// Return true if str is binary, else false
bool isBinary(string str)
{
   for(int i=0 ; i<str.length();i++){
    char temp = str.at(i);
       if(temp!='0' && temp!='1'){
         return 0;
       }
   }
   return 1;
}
