
string reverseWord(string str){
string ans ; 
for(int i =str.length();i>=0; i--){
    ans +=str[i];
}
return ans;
}

