class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        hash[0]++;
        vector<int> prefix;
        int sum = 0;

        for(int x: nums){
            sum += x;
            prefix.push_back(sum);
        }

        int result = 0;
        for(int x: prefix){
            if(hash[x-k] > 0){
                result += hash[x-k];
            }
            hash[x]++;
        }

        return result;
    }
};