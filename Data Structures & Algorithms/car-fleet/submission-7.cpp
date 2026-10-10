class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double> time;
        int result = 0;

        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        for(auto [pos, spd] : cars){
            time.push_back(double(target-pos)/spd);
        }
        
        double now = -1;
        for(double x : time){
            cout << x << ", ";
            if(x > now){
                result++;
                now = x;
            }
        }

        return result;
    }
};
