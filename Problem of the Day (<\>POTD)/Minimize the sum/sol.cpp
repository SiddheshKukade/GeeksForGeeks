class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        priority_queue<int , vector<int>, greater<int> > pq(arr.begin(), arr.end());
        int ans=0;
        while(pq.size() >=2){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            ans += x+y; // top 2 smallest elements  of the queue
            pq.push({x+y});
        }
        return ans;
    }
};
