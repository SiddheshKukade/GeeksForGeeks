class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    int n = s.length()-1;
	   for(int i=0; i<s.length() ; i++){
        if(i < n ) {
        	       if(s[i] != s[n]){
        	         return 0;}
        	       n--;
	        }
	   }
	   return 1; 
	}

};
