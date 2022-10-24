
class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
      input.push(x);  
    }

    int dequeue() {
        if(input.empty())
            return 1;
        while(input.size() > 0){
            output.push(input.top()); 
            input.pop();
        }
        int ans = output.top();
        output.pop();
        
         while(output.size()){
            input.push(output.top()); 
            output.pop();
        }
        return ans;
    }
};
