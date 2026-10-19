class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> temp;

        for(int i : nums){
            temp[i]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto x : temp){
            bucket[x.second].push_back(x.first);
        }

        vector<int> result;
        for(int i = bucket.size()-1; i > 0; i--){
            for (int n : bucket[i]) {
                result.push_back(n);
                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
