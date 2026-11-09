class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_map<int, int> temp{};

        for(int x : nums){
            temp[x]++;
        }

        for(int x : nums){
            if(temp[x-1] == 0){
                int i = 1;
                while(true){
                    if(temp[x+i] == 0){
                        break;
                    }
                    i++;
                }
                result = std::max(result, i);
            }
        }

        return result;
    }
};
