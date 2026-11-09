class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        int l = strs.size();
        map<array<int, 26>, vector<string>> temp;
        
        for(int i = 0; i < l; i++){
            array<int, 26> freq{};
            for(char c : strs[i]){
                freq[c-'a']++;
            }
            temp[freq].push_back(strs[i]);
        }

        for(auto it : temp){
            result.push_back(it.second);
        }

        return result;
    }
};
