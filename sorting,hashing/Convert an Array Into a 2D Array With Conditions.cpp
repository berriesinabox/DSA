class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int max_count=0;
        for(auto it : mpp){
            max_count=max(max_count,it.second);
        }
        vector<vector<int>> arr(max_count);
        for(auto it : mpp){
            int num=it.first;
            int freq=it.second;

            for(int i=0;i<freq;i++){
                arr[i].push_back(num);
            }
        }
        return arr;
    }
};
