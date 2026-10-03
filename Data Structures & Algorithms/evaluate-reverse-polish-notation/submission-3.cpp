class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;

        for(string &s: tokens){
            if(s == "+"){
                int temp = num.top();
                num.pop();
                temp += num.top();
                num.pop();
                num.push(temp);
            }else if(s == "-"){
                int temp = num.top();
                num.pop();
                int x = num.top();
                num.pop();
                num.push(x-temp);
            }else if(s == "*"){
                int temp = num.top();
                num.pop();
                temp *= num.top();
                num.pop();
                num.push(temp);
            }else if(s == "/"){
                int temp = num.top();
                num.pop();
                int x = num.top();
                num.pop();
                num.push(x/temp);
            }else{
                num.push(stoi(s));
            }
        }

        return num.top();
    }
};
