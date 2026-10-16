/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> start;
        vector<int> end;
        
        for(auto x : intervals){
            start.push_back(x.start);
            end.push_back(x.end);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int result = 0;
        int s = 0;
        int e = 0;
        int count = 0;
        while(s < intervals.size() && e < intervals.size()){
            // cout << "Start: " << start[s] << " End: " << end[e] << endl;
            if(start[s] < end[e]){
                s++;
                count++;
            }else{
                count--;
                e++;
            }
            result = std::max(result, count);
        }

        result = std::max(result, count-1);

        return result;
    }
};
