class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix, result;
        prefix.push_back(1);
        suffix.push_back(1);

        for(int i = 0; i < nums.size(); i++){
            prefix.push_back(prefix[i]*nums[i]);
            suffix.push_back(suffix[i]*nums[nums.size()-1-i]);
        }

        for(int i = 0; i < nums.size(); i++){
            result.push_back(prefix[i]*suffix[nums.size()-i-1]);
        }

        return result;
    }
};
