class Solution{
	public:
	string digitsNum(int N)
	{
	    // 10^5 _00,000
	    int c = N;
	    string s = "";
	    while(c>9){ //ex. c 20 
	        s +="9"; // s = 9 9 
	        c -=9;
	    }
	    string temp = to_string(c); // remaining value is attached to the string again 
	    s +=temp; // s = 9 9 2 
	    reverse(s.begin() , s.end()); // reversing to provide the minimun numbers
	    // s =  2 9 9 
	    for(int i=0; i<N ; i++){
	        s +="0";
	    } // s= 2 9 9 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	    return s;
	}
};
