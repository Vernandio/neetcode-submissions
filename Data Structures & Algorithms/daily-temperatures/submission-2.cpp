class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> mono;
        vector<int> result(temperatures.size());
        mono.push(0);

        for(int i = 1; i < temperatures.size(); i++){
            while(!mono.empty() && temperatures[mono.top()] < temperatures[i]){
                result[mono.top()] = i-mono.top();
                mono.pop();
            }
            mono.push(i);
        }

        return result;
    }
};
