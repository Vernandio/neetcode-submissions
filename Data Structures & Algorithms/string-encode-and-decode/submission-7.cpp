class Solution {
public:

    string encode(vector<string>& strs) {
        string encode;

        for(string s : strs){
            encode += to_string(s.length()) + "-" + s;
        }

        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;
        string num;
    
        for(int i = 0; i < s.length(); i++){
            cout << s[i];
            if(s[i] == '-'){
                int x = stoi(num);
                decode.push_back(s.substr(i+1, x));
                i = i+x;
                num = "";
            }else{
                num += s[i];
            }
        }

        return decode;
    }
};
