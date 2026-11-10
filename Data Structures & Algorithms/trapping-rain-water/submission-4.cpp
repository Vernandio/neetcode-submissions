class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n), suffix(n);
        prefix[0] = 0;
        suffix[n-1] = 0;

        int result = 0;

        for(int i = 1; i < n; i++){
            prefix[i] = max(prefix[i-1], height[i-1]);
            suffix[n-1-i] = max(suffix[n-i], height[n-i]);
        }
        cout << "Prefix: ";
        for(int i = 0; i < n; i++){
            if(min(prefix[i], suffix[i]) - height[i] > 0)
                result += min(prefix[i], suffix[i]) - height[i];
        }

        return result;
    }
};
