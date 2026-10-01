class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;

        int result = 0;
        while(l < r){
            if(heights[l] < heights[r]){
                if(heights[l]*(r-l) > result) result = heights[l]*(r-l);
                l++;
                // cout << "Result [L]: " << heights[l]*(r-l) << endl;
            }else{
                if(heights[r]*(r-l) > result) result = heights[r]*(r-l);
                r--;
                // cout << "Result [R]: " << heights[r]*(r-l) << endl;
            }
        }
        return result;
    }
};
