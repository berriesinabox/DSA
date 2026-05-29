class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_set<int,int>mp;
        int maxfreq=0;
        int ans;
        for(int num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            if(it.second>maxfreq){
                maxfreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};
