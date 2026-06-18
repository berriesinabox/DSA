class Solution {
public:
    int reverseDegree(string s) {
        int total=0;
        for(int i=0; i<s.length();i++){
            total += ('z'-s[i]+1)*(i+1);
        }
        return total;
    }
};
