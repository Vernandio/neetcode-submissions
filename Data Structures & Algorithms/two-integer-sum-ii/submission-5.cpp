class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> temp;
        for(int i = 0; i < numbers.size(); i++){
            if(temp[target-numbers[i]] > 0) return {temp[target-numbers[i]],i+1};
            temp[numbers[i]] = i+1;
        }

        return {};
    }
};
