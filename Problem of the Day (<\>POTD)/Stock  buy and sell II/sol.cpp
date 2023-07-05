class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        //buy on dip and sell on top
        int profit =0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
