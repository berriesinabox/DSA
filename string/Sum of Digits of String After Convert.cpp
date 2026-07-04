class Solution {
public:
    int getLucky(string s, int k) {
        string st;

        for(char ch : s){
            st += to_string(ch-'a'+1);
        }
        while(k--){
            int ans=0;

            for(char c : st){
                ans += c - '0';
            }

            st=to_string(ans);
        }
        return stoi(st);
    }
};
