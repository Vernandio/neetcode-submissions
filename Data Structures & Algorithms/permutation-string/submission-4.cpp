class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int temp1[26] = {0};

        for(char c : s1){
            temp1[c-'a']++;
        }

        int temp2[26] = {false};

        for(int j = 0; j < s2.size(); j++){
            // cout << "j: " << j << " len: " << s1.size()-1 << " s2[j]: " << s2[j] << " s2[j-len-1]: " <<s2[j-s1.size()] << endl;
            if(j > s1.size()-1){
                // cout << s2[j-s1.size()] << endl;
                temp2[s2[j-s1.size()] - 'a']--;
            }
            temp2[s2[j]-'a']++;
            bool temp = true;
            for(int i = 0; i < 26; i++){
                if(temp1[i] != temp2[i]){
                    // cout << "i: " << i << endl; 
                    // if(temp1[i] == false){
                    //     cout << "False1" << endl;
                    // }if(temp2[i] == false){
                    //     cout << "False2" << endl;
                    // }
                    temp = false;
                    break;
                }
            }
            if(temp) return true;
        }

        return false;
    }
};
