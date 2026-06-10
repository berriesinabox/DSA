class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return maxsubarray(nums,goal)-maxsubarray(nums,goal-1);
    }

private:
    int maxsubarray(vector<int>&nums , int k){
        if(k<0) return 0;

        int count=0;
        int sum=0;
        int l=0;
        for(int r=0;r<nums.size();r++){
            sum += nums[r];

            while(sum > k){
                sum -= nums[l];
                l++;
            }
            count += (r-l+1);
        }
        return count;
    }
};
