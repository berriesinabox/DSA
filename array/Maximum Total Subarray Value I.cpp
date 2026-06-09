class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max_num=-1;
        int min_num=INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i] >= max_num) max_num=nums[i];

            if(nums[i] < min_num) min_num=nums[i]; 
        }

        long long ans=1LL*(max_num-min_num)*k;

        return ans;
    }
};
