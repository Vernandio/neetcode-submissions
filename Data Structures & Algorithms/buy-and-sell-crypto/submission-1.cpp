class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int result = 0;

        for(int x : prices){
            result = std::max(result, x-min);
            min = std::min(min, x);
        }

        return result;
    }
};
