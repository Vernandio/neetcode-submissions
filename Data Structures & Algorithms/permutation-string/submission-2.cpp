class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int temp[26];
        int temp2[26];
        bool result = false;

        if(s1.length() > s2.length()){
            return result;
        }
        for(char c : s1){
            temp[c - 'a']++;
        }

        int len = s1.length()-1;

        for(int i = 0; i < s2.length(); i++){
            temp2[s2[i] - 'a']++;
            if(i > len){
                temp2[s2[i-len-1] - 'a']--;
            }
            if(i >= len){
                bool re = true;
                for (int j = 0; j < 26; j++) {
                    if (temp[j] != temp2[j]) {
                        re = false;
                        break;
                    }
                }

                if(re) return true;
            }
        }
        
        return result;
    }
};
