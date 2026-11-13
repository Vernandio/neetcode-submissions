class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        // for(int x : nums){
        //     cout << x << ", ";
        // }

        for(int i = 0; i < n; i++){
            while(i > 0 && i < n-1 && nums[i] == nums[i-1]) i++;
            long long int tempTarget = target + (-1 * nums[i]);
            for(int j = i+1; j < n; j++){
                while(j > i+1 && j < n-1 && nums[j] == nums[j-1]) j++;
                // cout << endl << "Nums[i] : " << nums[i] << " Nums[j]: " << nums[j] << " Target: " << tempTarget;
                long long int tempTarget2 = tempTarget + (-1 * nums[j]);
                // cout << endl << "i : " << i << " j: " << j << " Target: " << tempTarget2;

                int l = j+1, r = n-1;
                while(l < r){
                    if(nums[l] + nums[r] == tempTarget2){
                        // cout << " Masuk sini: " << nums[l] + nums[r] << endl;
                        result.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while(l < r && nums[l] == nums[l-1]) l++;
                        while(l < r && nums[r] == nums[r+1]) r--;
                    }else if(nums[l] + nums[r] < tempTarget2){
                        l++;
                    }else if(nums[l] + nums[r] > tempTarget2){
                        r--;
                    }
                }
            }
        }

        return result;
    }
};