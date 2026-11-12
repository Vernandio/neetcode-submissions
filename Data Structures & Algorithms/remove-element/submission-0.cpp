class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int result = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] != val) result++;
            else{
                for(int j = i+1; j < n; j++){
                    if(nums[j] == val) continue;
                    else{
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        result++;
                        break;
                    }
                }
            }
        }

        // for(int x : nums){
        //     cout << x << ", " ;
        // }
        return result;
    }
};