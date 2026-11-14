class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> temp;
        for(int x : nums){
            if(x > 0){
                temp[x]++;
            }
        }

        int before = 0;
        for(auto x : temp){
            // cout << "X: " << x.first << " & " << x.second << endl;
            if(before != x.first-1) return before+1;
            before = x.first;
        }
        if(before > 0) return before+1;

        return 1;
    }
};