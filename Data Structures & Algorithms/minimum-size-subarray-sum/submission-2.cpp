class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, n = nums.size(), result = INT_MAX;

        int total = 0;
        for(int i = 0; i < n; i++){
            total += nums[i];

            while(total >= target){
                result = min(i-l+1, result);
                total -= nums[l];
                l++;
            }
        }

        return result == INT_MAX ? 0 : result;
    }
};