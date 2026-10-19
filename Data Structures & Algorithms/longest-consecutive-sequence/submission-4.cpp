class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        map<int, int> x;

        for(int i : nums){
            x[i]++;
        }
        
        int temp = 0;
        int before = 0;
        bool befores = false;
        for(auto z: x){
            if(befores){
                if(z.first != before+1){
                    result = std::max(temp, result);
                    temp = 0;
                }
            }
            temp++;
            before = z.first;
            befores = true;
        }
        result = std::max(temp, result);

        return result;
    }
};
