class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int l = 0, r = people.size()-1, result = 0;

        int before = 0;

        for(int x : people){
            cout << x << ", ";
        }
        cout << endl;

        while(l <= r){
            cout << endl << "L: " << l << " R: " << r << endl;
            if(people[l] + people[r] == limit){
                cout << "Masuk 1";
                l++; r--;
                result++;
            }
            else if(people[l] + people[r] > limit){
                cout << "Masuk 2";
                r--;
                result++;
            }else{
                cout << "Masuk 3";
                int before = people[l];
                while(people[l+1] + before + people[r] < limit){
                    cout << "Masuk4";
                    l++;
                }
                result++;
                l++;
                r--;
            }
        }

        return result;
    }
};