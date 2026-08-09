class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0;
        int min_price=INT_MAX;
        int n = prices.size();
        for(int price:prices){
            if (price < min_price){
                min_price = price;
            }
            else if( price - min_price > maxprof){
                maxprof = price - min_price;
            }
      
        }
          return maxprof;
    }
};
