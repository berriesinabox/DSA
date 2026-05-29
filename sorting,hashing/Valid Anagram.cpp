class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char num : s){
            mp1[num]++;
        }
        for(char num : t){
            mp2[num]++;
        }
        if(mp1 == mp2){
            return true;
        }
        return false;
    }
};
