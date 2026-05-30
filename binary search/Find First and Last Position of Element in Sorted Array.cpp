class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low1=0,high1=nums.size()-1;
        int low2=0,high2=nums.size()-1;
        int ans1=-1;
        int ans2=-1;
        while(low1 <= high1){
            int mid1 = (low1+((high1-low1)/2));
            if(nums[mid1] == target){
                ans1=mid1;
                high1=mid1-1;
            }
            else if(nums[mid1] >= target){
                high1=mid1-1;
            }
            else{
                low1=mid1+1;
            }
        }
        while(low2 <= high2){
             int mid2 = (low2+((high2-low2)/2));
             if(nums[mid2] == target){
                ans2=mid2;
                low2=mid2+1;
             }
             else if(nums[mid2] > target){
                high2=mid2-1;
             }
             else{
                low2=mid2+1;
             }
        }
        return {ans1, ans2};
    }
};
