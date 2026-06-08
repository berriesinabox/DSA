class Solution {
public:
    int numberOfSubstrings(string s) {
      unordered_map<char,int>mpp;
      int left=0,count=0;
      int n=s.length();
      for(int right=0;right<s.length();right++){
        mpp[s[right]]++;
        if(mpp.size() == 3){
            count += (n-right);
            
            mpp[s[left]]--;
            
            if(mpp[s[left]]==0){
                mpp.erase(s[left]);
            }

            left++;
            
        }
      }  
      return count;
    }
};
