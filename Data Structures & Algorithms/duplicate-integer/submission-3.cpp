class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> temp;

        for(int x : nums){
            if(temp[x] > 0){
                return true;
            }
            temp[x]++;
        }

        return false;
    }
};