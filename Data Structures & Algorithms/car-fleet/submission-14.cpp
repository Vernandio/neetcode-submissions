class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> car;

        for(int i = 0; i < position.size(); i++){
            car.push_back({position[i], speed[i]});
        } 

        sort(car.begin(), car.end(), [](const auto a, const auto b){
            return a.first > b.first;
        });

        stack<double> fleet;
        for(auto c : car){
            double time = (double)(target-c.first)/c.second;
            if(fleet.empty() || time > fleet.top()){
                fleet.push(time);
            }
        }

        return fleet.size();
    }
};
