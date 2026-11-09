class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;

        for(int i = 0; i < nums.size(); i++){
            if(temp[target-nums[i]] > 0) return {temp[target-nums[i]]-1, i};
            temp[nums[i]] = i+1;
        }

        return {};
    }
};
