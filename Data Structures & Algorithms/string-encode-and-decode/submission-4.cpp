class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string s : strs){
            int length = s.length();
            result += to_string(length);
            result += "#" + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#'){
                temp += s[i];
            }else{
                result.push_back(s.substr(i+1, stoi(temp)));
                i = i+stoi(temp);
                temp = "";
            }
        }

        return result;
    }
};
