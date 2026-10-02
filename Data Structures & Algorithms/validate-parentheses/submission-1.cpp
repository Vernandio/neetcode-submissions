class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;

        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                temp.push(c);
            }else{
                if(temp.empty()) return false;
                if(temp.top() == '(' && c != ')'){
                    return false;
                }else if(temp.top() == '[' && c != ']'){
                    return false;
                }else if(temp.top() == '{' && c != '}'){
                    return false;
                }else{
                    temp.pop();
                }
            }
        }

        if(!temp.empty()) return false;

        return true;
    }
};
