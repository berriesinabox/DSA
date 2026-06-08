class Solution {
public:
    int kDistinctChar(string& s, int k) {
        unordered_map<char,int>mpp;
        int left=0,maxlen=0;

        for(int right=0;right<s.length();right++){
            mpp[s[right]]++;

            while(mpp.size() > k){
                mpp[s[left]]--;

                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            if(mpp.size() <= k){
                maxlen=max(maxlen,right-left+1);
            }
        }
        return maxlen;
    }
};
