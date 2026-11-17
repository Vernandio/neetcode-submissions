class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        
        for(string c : operations){
            int len = result.size()-1;
            if(c == "+"){
                result.push_back(result[len-1]+result[len]);
            }
            else if(c == "C"){
                result.erase(result.end() - 1);
            }
            else if(c == "D"){
                result.push_back(result[len]*2);
            }
            else{
                result.push_back(stoi(c));
            }
        }

        int sum = 0;
        for(int x : result){
            sum += x;
        }

        return sum;
    }
};