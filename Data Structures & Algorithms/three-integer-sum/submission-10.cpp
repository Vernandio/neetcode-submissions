class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i = 0; i < nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            if(nums[i] > 0) break;
            int target = -1 * nums[i];
            int l = i+1;
            int r = nums.size()-1;

            while(l < r){
                if(target == nums[l] + nums[r]){
                    result.push_back({nums[i], nums[l], nums[r]});
                    l++; r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }else if(target < nums[l] + nums[r]){
                    r--;
                }else if(target > nums[l] + nums[r]){
                    l++;
                }
            }
        }

        return result;
    }
};
