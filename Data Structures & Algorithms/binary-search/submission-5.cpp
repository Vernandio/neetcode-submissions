class Solution {
public:
    int binarySearch(int l, int r, int target, vector<int>& nums){
        if(l > r) return -1;
        int mid = l + (r-l) / 2;

        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            return binarySearch(mid+1, r, target, nums);
        }else{
            return binarySearch(l, mid-1, target, nums);
        }
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(0, nums.size()-1, target, nums);
    }
};
