class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int result = 0;

        while(l < r){
            result = std::max(min(heights[l], heights[r]) * (r-l), result);
            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }

        return result;
    }
};
