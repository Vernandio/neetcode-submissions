class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> temp;
        vector<vector<string>> result;

        int i = 0;
    
        for(const string& s : strs){
            string key = s;
            sort(key.begin(), key.end());
            if(temp[key] == 0){
                i++;
                temp[key] = i;
                result.push_back({});
            };
            result[temp[key]-1].push_back(s);
        }

        return result;
    }
};
