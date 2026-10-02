class MinStack {
public:
    stack<int> main, min;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(min.empty()) min.push(val);
        else{
            if(min.top() < val) min.push(min.top());
            else min.push(val);
        }
    }
    
    void pop() {
        main.pop();
        min.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return min.top();
    }
};
