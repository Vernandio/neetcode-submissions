class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());


        int length = nums.size();
        for(int i = 0; i < length-2; i++){
            int target = nums[i] * -1;
            int j = i+1;
            int k = length-1;
            while(j < k){
                if(nums[j] + nums[k] == target){
                    bool z = false;
                    for(vector<int> temp : result){
                        if(temp == vector<int> {nums[i], nums[j], nums[k]}){
                            z = true;
                            break;
                        }
                    }
                    if(z == false) result.push_back({nums[i], nums[j], nums[k]});
                    k--;
                }else if(nums[j] + nums[k] < target){
                    j++;
                }else if(nums[j] + nums[k] > target){
                    k--;
                }
            }
        }

        return result;
    }
};
