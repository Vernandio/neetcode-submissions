class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int target = nums[i] * -1;
            int l = i+1;
            int r = nums.size()-1;

            cout << "Target: " << target << endl;

            while(l < r){
                if(nums[l] + nums[r] == target){
                    result.push_back({nums[l], nums[r], nums[i]});
                    l++;
                    r--;
                    while(l < r && nums[l-1] == nums[l]) l++;
                    while(l < r && nums[r+1] == nums[r]) r--;
                }else if(nums[l] + nums[r] < target){
                    l++;
                }else{
                    r--;
                }
            }
        }

        return result;
    }
};
