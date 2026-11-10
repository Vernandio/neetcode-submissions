class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int min = prices[0];

        for(int i = 1; i < prices.size(); i++){
            min = std::min(min, prices[i]);
            result = max(result, prices[i]-min);
        }

        return result;
    }
};
