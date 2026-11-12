class Solution {
public:
    void merge(vector<int>& a, int l, int mid, int r) {
        vector<int> temp;

        int i = l, j = mid + 1;

        while (i <= mid && j <= r) {
            if (a[i] <= a[j])
                temp.push_back(a[i++]);
            else
                temp.push_back(a[j++]);
        }

        while (i <= mid)
            temp.push_back(a[i++]);

        while (j <= r)
            temp.push_back(a[j++]);

        for (int k = 0; k < temp.size(); k++)
            a[l + k] = temp[k];
    }

    void mergeSort(vector<int>& a, int l, int r) {
        if (l >= r) return;

        int mid = l + (r - l) / 2;

        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
    }
};