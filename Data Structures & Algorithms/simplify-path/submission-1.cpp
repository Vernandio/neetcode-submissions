class Solution {
public:
    string simplifyPath(string path) {
        int start = 0, end = 1;
        string result = "";
        vector<string> temp;

        for(int i = 0; i < path.length(); i++){
            if(path[i] == '/'){
                if(end != 1){
                    string s = path.substr(start, end);
                    if(s == "/."){
                        
                    }else if(s == "/.."){
                        if(!temp.empty())
                            temp.erase(temp.end()-1);
                    }else{
                        temp.push_back(s);
                    }
                    end = 1;
                }
                start = i;
            }else{
                end++;
            }
        }

        if(end != 1){
            string s = path.substr(start, end);
            if(s == "/."){
                
            }else if(s == "/.."){
                if(!temp.empty())
                    temp.erase(temp.end()-1);
            }else{
                temp.push_back(s);
            }
            end = 1;
        }

        for(string s : temp){
            result += s;
        }

        return result == "" ? "/" : result;
    }
};