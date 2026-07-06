class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st1;
        int count=0;
        for(char ch : allowed){
            st1.insert(ch);
        }
        for(int i=0;i<words.size();i++){
            int check=1;
            for(char ch : words[i]){
                if(st1.find(ch) == st1.end()){
                    check=0;
                    break;
                }
            }
            if(check == 1){
                count++;
            }
        }
        return count;
    }
};
