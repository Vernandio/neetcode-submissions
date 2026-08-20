class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix, result;
        int length = nums.size();

        prefix.push_back(1);
        for(int i = 0; i < length; i++){
            prefix.push_back(nums[i]);
            prefix[i+1] *= prefix[i];
        }

        suffix.push_back(1);
        for(int i = 0; i < length; i++){
            suffix.push_back(nums[length-1-i]);
            suffix[i+1] *= suffix[i];
        }

        for(int i = 0; i < length; i++){
            result.push_back(prefix[i] * suffix[length-i-1]);
        }

        return result;
    }
};
