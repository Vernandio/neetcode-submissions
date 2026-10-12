class Solution {
public:
    bool binarySearch(int start, int end, int target, vector<int>& nums){
        if(start > end) return false;
        int mid = start + (end-start) / 2;
        if(nums[mid] == target){
            return true;
        }else if(nums[mid] < target){
            return binarySearch(mid+1, end, target, nums);
        }else{
            return binarySearch(start, mid-1, target, nums);
        }
    }

    int findRow(int start, int end, int target, vector<vector<int>>& matrix){
        if(start > end) return -1;
        int mid = start + (end-start) / 2;
        // cout << "Mid: " << mid << endl;
        // cout << "Matrix[mid][0]: " << matrix[mid][0] << " Matrix[mid][matrix[0].size()-1]: " << matrix[mid][matrix[0].size()-1] << " Target: " << target << endl;
        if((matrix[mid][0] <= target) && (matrix[mid][matrix[0].size()-1] >= target)){
            return mid;
        }else if((matrix[mid][0] > target)){
            return findRow(start, mid-1, target, matrix);
        }else{
            return findRow(mid+1, end, target, matrix);
        }
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // cout << "Matrix Size: " << matrix.size() << endl;
        int row = findRow(0, matrix.size()-1, target, matrix);
        cout << "Row: " << row;
        if(row == -1) return false;

        return binarySearch(0, matrix[0].size()-1, target, matrix[row]);
    }
};
 