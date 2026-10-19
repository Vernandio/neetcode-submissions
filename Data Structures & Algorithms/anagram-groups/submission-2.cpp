class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> temp;

        for(string x : strs){
            vector<int> z(27, 0);
            for(char s : x){
                z[s-'a']++;
            }

            string key = to_string(z[0]);
            for(int i = 1; i < 27; i++){
                key += ", " + to_string(z[i]);
            }
            temp[key].push_back(x);
        }

        for(auto x : temp){
            result.push_back(x.second);
        }
        
        return result;
    }
};
