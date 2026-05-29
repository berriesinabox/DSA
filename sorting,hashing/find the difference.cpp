class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp1;
        //unordered_map<char,int>mp2;
        for(char num : s){
            mp1[num]++;
        }
        // for(char num : t){
        //     mp2[num]++;
        // }
        for(char num : t){
            mp1[num]--;  // extra character ka freq =-1
        }
        for(auto &it : mp1){
            if(it.second < 0){
                return it.first;
            }
        }
        return ' ';
    }
};
