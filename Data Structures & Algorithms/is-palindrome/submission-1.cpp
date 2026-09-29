class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for(char c : s){
            if(isalnum(c)){
                result += tolower(c);
            }
        }
        int length = result.length();
        for(int i = 0; i < length/2; i++){
            if(result[i] != result[length-i-1]) return false;
        }

        return true;
    }
};
