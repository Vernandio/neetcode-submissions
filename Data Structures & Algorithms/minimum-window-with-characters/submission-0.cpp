class Solution {
public:
    string minWindow(string s, string t) {
        int len = s.length();
        int lenT = t.length();

        if(len < lenT) return "";
        if(s == t) return s;


        unordered_map<char, int> hashT;
        for(char c : t){
            hashT[c]++;
        }
        
        unordered_map<char, int> hashS;
        int required = hashT.size();
        int formed = 0;

        int left = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int i = 0; i < len; i++){
            char c = s[i];
            hashS[c]++;

            if (hashT.count(c) && hashS[c] == hashT[c]) {
                formed++;
            }
            
            while (formed == required) {

                int windowLen = i - left + 1;

                if (windowLen < minLen) {
                    minLen = windowLen;
                    start = left;
                }

                // Remove left character
                char removed = s[left];

                if (hashT.count(removed) &&
                    hashS[removed] == hashT[removed]) {
                    formed--;
                }

                hashS[removed]--;
                left++;
            }
        }

        if (minLen == INT_MAX) return "";

        return s.substr(start, minLen);
    }
};
