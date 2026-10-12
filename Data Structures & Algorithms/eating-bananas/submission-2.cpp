class Solution {
public:
    int binarySearch(int start, int end, int h, vector<int>& piles, int speed){
        // cout << "Start: " << start << " End: " << end << " Speed: " << speed;
        if(start > end) return speed;
        int mid = start + (end-start) / 2;
        int temp = 0;
        for(int x : piles){
            temp += (x + mid - 1) / mid;
            // cout << " X: " << x << " Mid: " << mid << " X/K: " << x/mid;  
        }
        // cout << " Mid: " << mid << " Temp: " << temp << endl;
        cout << endl;
        if(temp <= h){
            return binarySearch(start, mid-1, h, piles, mid);
        }else{
            return binarySearch(mid+1, end, h, piles, speed);
        }
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        for(int i : piles){
            max = std::max(i, max);
        }

        return binarySearch(1, max, h, piles, INT_MAX);
    }
};
