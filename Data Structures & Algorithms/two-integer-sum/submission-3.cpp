class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> x;

        for(int i = 0; i < nums.size(); i++){
            if(x[target-nums[i]]) return {x[target-nums[i]]-1, i};
            x[nums[i]] = i+1; 
        }

        return {};
    }
};
