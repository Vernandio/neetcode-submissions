class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // vector<int> result(n);

        // for(int i = 0; i < n; i++){
        //     result[(i+k) % n] = nums[i];
        // }
        // nums = result;

        
        std::rotate(nums.begin(), nums.end() - (k % nums.size()), nums.end());
    }
};