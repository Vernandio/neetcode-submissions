class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size();

        while(l < r){
            if(r-l <= k) break;
            if(abs(x-arr[l]) <= abs(x-arr[r-1])){
                r--;
            }else{
                l++;
            }
        }
        vector<int> result(arr.begin()+l, arr.begin()+r);
        if(l == 0 &&  r == arr.size()-1) result = vector<int>(arr.begin() + l, arr.begin() + k);

        return result;
    }
};