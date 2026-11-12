class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        int s = strs.size();
        string result;
        
        for(int i = 0; i < n; i++){
            char c = strs[0][i];
            for(int j = 1; j < s; j++){
                if(c != strs[j][i]) return result;
            }
            result += c;
        }

        return result;
    }
};