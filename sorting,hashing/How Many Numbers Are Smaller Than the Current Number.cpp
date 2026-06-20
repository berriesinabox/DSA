class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> dupe =nums;
        unordered_map<int,int> mpp;
        vector<int>ans;

        sort(dupe.begin(),dupe.end());

        for(int i=0;i<nums.size();i++){
            if(mpp.find(dupe[i]) == mpp.end()){
                mpp[dupe[i]]=i;
            }
        }
        for(auto it  : nums){
            ans.push_back(mpp[it]);
        }
        return ans;
    }
};
