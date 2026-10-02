class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> max;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++){

            //remove outside sliding window
            while(!max.empty() && max.front() <= i-k){
                max.pop_front();
            }

            //remove less value
            while(!max.empty() && nums[max.back()] < nums[i]){
                max.pop_back();
            }

            max.push_back(i);

            if(i >= k-1){
                result.push_back(nums[max.front()]);
            }
        }

        return result;
    }
};
