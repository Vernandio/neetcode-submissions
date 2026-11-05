class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix, suffix;

        int max = 0;

        for(int i : height){
            prefix.push_back(max);
            max = std::max(max, i);
        }

        max = 0;
        for(int i = height.size()-1; i > -1; i--){
            suffix.push_back(max);
            max = std::max(max, height[i]);
        }
        
        int result = 0;
        for(int i = 0; i < height.size(); i++){
            // cout << "Height: " << height[i] << " Prefix: " << prefix[i] << " & Suffix: " << suffix[height.size()-1-i];

            // cout << " Min: " << std::min(prefix[i], suffix[height.size()-1-i]) - height[i] << endl;
            if(std::min(prefix[i], suffix[height.size()-1-i]) - height[i] > 0) result += std::min(prefix[i], suffix[height.size()-1-i]) - height[i];
        }

        return result;
    }
};
