class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size())return "";

        unordered_map<char,int> mpp;
        for(char c : t){
            mpp[c]++;
        }

        int left=0,start=0;
        int minlen=INT_MAX;
        int count = t.size();
        for(int right=0;right<s.size();right++){
            if(mpp[s[right]] > 0){
                count--;
            }
            mpp[s[right]]--;

            while(count == 0){
                if(right-left+1 < minlen){
                    minlen = right-left+1;
                    start=left;
                }
                mpp[s[left]]++;

                if(mpp[s[left]] > 0){
                    count++;
                }
                left++;
            }
        }
        return minlen == INT_MAX ? "" : s.substr(start,minlen);
    }
};
