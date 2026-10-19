class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> h;

        for(int i : nums){
            if(h[i] > 0) return true;
            h[i]++;
        }

        return false;
    }
};