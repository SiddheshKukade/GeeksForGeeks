class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        queue<int> copy = q;
        int ans =0;
        while(!copy.empty()){
            if(copy.front() == k){
                ans+=1;
            }
            copy.pop();
        }
        return ans;
    }
    
};
