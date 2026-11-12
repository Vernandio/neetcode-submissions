class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> temp;
        int n = nums.size();
        for(int x : nums){
            temp[x]++;
        }

        for(auto x : temp){
            if(x.second > n/2) return x.first;
        }

        return 0;
    }
};