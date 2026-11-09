class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> temp;

        vector<vector<int>> freq(nums.size()+1);

        for(int x : nums){
            temp[x]++;
        }

        for(auto it : temp){
            freq[it.second].push_back(it.first);
        }

        for(int i = nums.size(); i >= 0; i--){
            for(int n : freq[i]){
                result.push_back(n);
                k--;
                if(k == 0) return result;
            }
        }


        return result;
    }
};
