class Solution
{
    boolean[] prime;
    Solution()
    {
        // Every index of prime stores zero or one
        // If prime[i] is zero means i is not a prime
        // If prime[i] is one means i is a prime
        
     prime= new boolean[10000];
     Arrays.fill(prime, true); // we consider all no as prime
     prime[0]= prime[1] = false; // first 2 nos are not considerd as prime
     
     for(int i=2; i<10000; i++){
         if(!prime[i]) continue; // if true then skip current step
         for(int j=2; i*j < 10000; j++) prime[i*j] = false; // store the 10000 combinations of prime no
     } // we have computed nos from 0 to 10000 as primes and not prime
    // for(int i=0 ;i<1000;i++) prime[i] = false; // all non 4 digit nos are ot prime
        
    }
    
    public int shortestPath(int Num1,int Num2){
        // Complete this function using prime array
        
        boolean[] vis = new boolean[10000]; //visited
        Queue<int[]> q = new LinkedList<>();// performing BFS
        q.add(new int[] {Num1, 0}); // add first number
        vis[Num1] = true; // make num 1 as visited
        while(!q.isEmpty()){ // untill q is empt
            int [] curr = q.remove(); // get current value from q
            if(curr[0] == Num2) return curr[1];// ANS IS FOUND HERE
            char[] arr = Integer.toString(curr[0]).toCharArray(); // convert no to char array
            for(int i= 0 ; i<4; i++){ // 0 to 3
                for(char ch='0'; ch<='9';ch++){
                    char prevChar = arr[i]; 
                    arr[i] = ch; // iterate over 0 to 9 for current digit
                    int newNum = Integer.parseInt(new String(arr)); // get the new number  from char array
                    if(!vis[newNum] && prime[newNum] && newNum>=1000){
                        //that no is not visited  it is prime and it is greater than 1000 so zeros are skipped
                        vis[newNum] = true; // mark visited
                        q.add(new int[] {newNum  , curr[1]+1}); // add to ans queu
                    }
                    arr[i] = prevChar;//replace it with old char again to keep it consistent
                }
            }
        }
    return -1; // if not found return -1
    }
}
