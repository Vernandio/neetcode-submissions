class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix;
        prefix.push_back(1);
        suffix.push_back(1);

        for(int i = 0; i < nums.size(); i++){
            prefix.push_back(nums[i]*prefix[i]);
            suffix.push_back(nums[nums.size()-i-1]*suffix[i]);
        }

        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            result.push_back(prefix[i]*suffix[nums.size()-i-1]);
        }

        return result;
    }
};
