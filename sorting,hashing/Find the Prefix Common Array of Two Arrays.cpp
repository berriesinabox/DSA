class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;
        vector<int> ans;
        int freq=0;
        for(int i=0;i<A.size();i++){
            mpp1[A[i]]++;
            if(mpp2.find(A[i]) != mpp2.end()){
                freq++;
            }

            mpp2[B[i]]++;
            if(mpp1.find(B[i]) != mpp1.end()){
                freq++;
            }

            ans.push_back(freq);
        }
        return ans;
    }
};
