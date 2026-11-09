class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for(string s : strs){
            int length = s.length();
            result += to_string(length) + "+" + s;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string length;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '+'){
                int subl = stoi(length);
                result.push_back(s.substr(i+1, subl));
                i = i+subl+1;
                length = "";
            }
            length += s[i];
        }

        return result;
    }
};
