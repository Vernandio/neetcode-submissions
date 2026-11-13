class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result = 1;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            // cout << "Nums[i-1] : " << nums[i-1] << " Nums[i]: " << nums[i] << endl;
            if(nums[i-1] == nums[i]){
                nums.erase(nums.begin() + i);
                i--;
                n--;
            }else
                result++;
        }
        // cout << "Result: " << result;

        return result;
    }
};