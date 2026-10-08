class Solution {
public:
    int binarySearch(int start, int end, int target, vector<int>& nums){
        if (start > end) {
            return -1;
        }
        int mid = start + (end - start) / 2;
        if(target == nums[mid]){
            return mid;
        }else if(target < nums[mid]){
            return binarySearch(start, mid-1, target, nums);
        }else{
            return binarySearch(mid+1, end, target, nums);
        }
    }

    int search(vector<int>& nums, int target) {
        int l = 0, r =  nums.size()-1, mid = l + (r-l) / 2;
        int pivot;
        if(nums[l] < nums[mid]){
            pivot = r-1;
            for(int i = mid; i < r-1; i++){
                if(nums[i] > nums[i+1]){
                    pivot = i;
                    break;
                }
            }
        }else{
            pivot = l;
            for(int i = 0; i < mid; i++){
                if(nums[i] > nums[i+1]){
                    pivot = i;
                    break;
                }
            }
        }
        pivot++;

        cout << "Pivot: " << pivot << endl;

        vector<int> temp(nums.begin(), nums.begin() + pivot);
        vector<int> temp2(nums.begin() + pivot, nums.end());

        for(int z : temp){
            cout << z << ", ";
        }
        cout << endl;

        for (int z : temp2){
            cout << z << ", ";
        }

        int x = binarySearch(0, temp.size()-1, target, temp);
        int y = binarySearch(0, temp2.size()-1, target, temp2);

        // cout << x << ", " << y;
        if(x != -1){
            return x;
        }else if(y != -1){
            return y + pivot;
        }

        return -1;
    }
};
