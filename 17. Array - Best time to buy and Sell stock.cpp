class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice , sellPrice ;
        buyPrice = sellPrice = prices[0];
        int bestProfit = sellPrice-buyPrice;
        for(int i = 1 ; i<prices.size();i++){
             if(buyPrice>prices[i]){
                 buyPrice = prices[i];
                 sellPrice = prices[i];
                if(bestProfit<(sellPrice-buyPrice)){
                    bestProfit = sellPrice-buyPrice;
                }
             }
            if(sellPrice<prices[i]){
                sellPrice = prices[i];
                if(bestProfit<(sellPrice-buyPrice)){
                    bestProfit = sellPrice-buyPrice;
                }
            }
        }
        return bestProfit;
        
    }
};