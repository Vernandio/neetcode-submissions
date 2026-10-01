class Solution {
public:
    int trap(vector<int>& height) {
        unordered_map<int, pair<int, int>> helper;
        int min = 0;
        int x = 0;
        for(int i : height){
            helper[x].first = min;
            if(i > min) min = i;
            x++;
        }
        min = 0;
        x--;
        for(int i = height.size()-1; i > -1; i--){
            helper[x].second = min;
            if(height[i] > min) min = height[i];
            x--;
        }

        int result = 0;
        for(const auto& [key, z] : helper){
            if(height[key] < std::min(z.first, z.second)){
                result += std::min(z.first, z.second) - height[key];
            }
        }

        return result;
    }
};
