class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for (string word:words) {
            int sum = 0;
            for (char cha: word) {
                sum += weights[cha -'a'];
            }
            ans += char('z'-(sum%26));
        }

        return ans;
    }
};
