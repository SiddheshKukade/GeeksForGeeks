Maximum Rectangular Area in a Histogram
 long long getMaxArea(long long hist[], int n)
    {
        // Your code here
        stack<long long> s;
        long long ma = 0;
        long long i =0;
        while(i<n){
            if(s.empty() or hist[s.top()] <= hist[i]){
                s.push(i++);}
            else{
                long long tp = s.top();
                s.pop();
                long long ans = hist[tp] * (s.empty() ? i :i-s.top()-1);
                ma = max(ma,ans);
            }
        }
        while(!s.empty()){
            long long tp = s.top();
            s.pop();
            long long ans = hist[tp] * (s.empty() ? i : i-s.top() -1);
            ma = max(ma,ans);
        }
        return ma;
    }
