class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size(), x;
        if(n1 < n2) x = n1;
        else x = n2;

        string result;
        for(int i = 0; i < x; i++){
            result += word1[i];
            result += word2[i];
        }

        for(int i = x; i < (n1 > n2 ? n1 : n2); i++){
            result += (n1 > n2 ? word1[i] : word2[i]);
        }

        return result;
    }
};