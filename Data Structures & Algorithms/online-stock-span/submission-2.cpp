class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int, int>> temp;
    
    int next(int price) {
        int x = 1;
        while(!temp.empty() && temp.top().first <= price){
            x += temp.top().second;
            temp.pop();
        }
        temp.push({price, x});

        return x;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */