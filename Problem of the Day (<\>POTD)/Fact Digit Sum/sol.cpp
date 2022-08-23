class Solution{
	public:
	// we have a given a number and we have to find our which numbers answer as factorial are adding up to that number
	// first we will start off by diving the answer with factorial of 9 and then going backwords 
	// we will keep adding the current counter factorial in answer if and only if the counter is dividing the current  number and ans is coming greater than 1 
	// if ans fall below 0 then we will mod the current answer ans and will get the remaining no to calculate on furthur
	// for moving forward  we are dividing current fact by its answer to get the previous factorial as answer 
	vector<int> FactDigit(int N)
	{
	    vector<int> v; 
	    int r =1 , i; // this stores the current factorial 
	   // First Let's calculate factorial of 9 
	   for( i = 1 ; i<10 ; i++){
	       r *= i;
	   }
	   i--; //setting i to 9 again 
	   
	   while (N > 0) { // n is valid
	       int f = N / r ; /// we are dividing to make sure that the current factorial is not larger 
	       // than the current number
	       while(f > 0){ // is factorial is not bigger than the current number
	           v.push_back(i); // push the answer;
	           f--; // subtract 1 from the divison to check if f was 3 or 2 or anything
	       }
	       N %= r; // mod operations gives the remainder and stored  as N 
	       // so that the loop will only run if some number is still left
	       
	       r/=i ; // if we divide current factorial by its number it returns the previous factorial
	       // ex. if we divide the factorial of 9 by 9 it will give us the answer as factorial of 8
	       // the above line hels us to traverse backwords
	       
	       i--; // reducing the counter
	   }
	   //we have to provide the minimum as answer and we are calculating 
	   //the answer that is why we are reversing our answer here
	   reverse(v.begin(), v.end());
	   return v ;
	}
};
