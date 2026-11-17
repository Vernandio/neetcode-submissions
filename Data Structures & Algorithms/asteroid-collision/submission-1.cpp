class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> temp;

        for(int x : asteroids){
            bool alive = true;
            while(!temp.empty() && temp.top() > 0 && x < 0){
                if(temp.top() < abs(x)){
                    temp.pop();
                }else if(temp.top() == abs(x)){
                    alive = false;
                    temp.pop();
                    break;
                }else{
                    alive = false;
                    break;
                }
            }
            if(alive){
                temp.push(x);
            }
        }

        vector<int> result(temp.size());
        int i = temp.size()-1;
        while(!temp.empty()){
            result[i] = temp.top();
            temp.pop();
            i--;
        }

        return result;
    }
};