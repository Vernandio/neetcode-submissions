class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> temp;
        vector<int> result;

        for(int x : nums){
            temp[x]++;
        }

        for(auto x: temp){
            if(x.second > nums.size()/3) result.push_back(x.first);
        }

        return result;
    }
};