class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
       vector<int> ans(2*nums.size());
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
        ans[i]=nums[i];
       }
       for(int i=0;i<nums.size();i++){
        ans[n+i]=nums[n-i-1];
       }
       return ans; 
    }
};
