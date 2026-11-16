class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int start = prices[0];
        int profitTemp = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i]-start > profitTemp){
                profitTemp = prices[i]-start;
            }else{
                profit += profitTemp;
                start = prices[i];
                profitTemp = 0;
            }
        }

        profit += profitTemp;

        return profit;
    }
};