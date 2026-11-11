class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;

        for(string s : tokens){
            if(s == "+"){
                int a = result.top(); result.pop();
                int b = result.top(); result.pop();
                result.push(a+b);
            }else if(s == "-"){
                int a = result.top(); result.pop();
                int b = result.top(); result.pop();
                result.push(b-a);
            }else if(s == "*"){
                int a = result.top(); result.pop();
                int b = result.top(); result.pop();
                result.push(b*a);
            }else if(s == "/"){
                int a = result.top(); result.pop();
                int b = result.top(); result.pop();
                result.push(b/a);
            }else{
                result.push(stoi(s));
            }
        }

        return result.top();
    }
};
