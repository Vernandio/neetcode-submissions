class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x;

        for (int n : nums){
            x[n]++;
        }

        vector<pair<int, int>> temp;

        for(auto it: x){
            temp.push_back({it.second, it.first});
        }
        sort(temp.begin(), temp.end());

        vector<int> result;
        for(int i = temp.size(); i > temp.size()-k; i--){
            result.push_back(temp[i-1].second);
        }

        return result;
    }
};
