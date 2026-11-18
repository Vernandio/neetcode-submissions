class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> temp;
        string curr = "";
        int num = 0;

        for(char c : s){
            if(isdigit(c)){
                num = num * 10 + c - '0';
            }else if(c == '['){
                temp.push({curr, num});
                num = 0;
                curr = "";
            }else if(c == ']'){
                auto [prev, k] = temp.top();
                temp.pop();

                string s =  "";
                for(int i = 0; i < k; i++){
                    s += curr;
                }

                curr = prev + s;
            }else{
                curr += c;
            }
        }

        return curr;
    }
};