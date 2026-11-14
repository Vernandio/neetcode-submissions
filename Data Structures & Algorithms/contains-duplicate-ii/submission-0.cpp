class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> temp;
        for(int i = 0; i < n; i++){
            if(temp[nums[i]] > 0){
                if(abs((temp[nums[i]]-1) - i) <= k) return true;
            }
            temp[nums[i]] = i+1;
        }
        
        return false;
    }
};