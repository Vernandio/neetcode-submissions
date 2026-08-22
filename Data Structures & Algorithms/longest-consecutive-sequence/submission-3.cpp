class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        set<int> temp;

        for(int x : nums){
            temp.insert(x);
        } 

        int result = 0;
        int z = 1;
        for(int x : temp){
            if(temp.count(x-1)){
                z++;
            }else{
                if(z > result) result = z;            
                z = 1;
            }
        }
        if(z > result) result = z;      

        return result;
    }
};
