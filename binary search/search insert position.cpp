
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        if(nums[0] > target){
            return 0;
        }

        for(int i = 0; i < n; i++){

            if(nums[i] == target){
                return i;
            }

            if(i < n-1 && nums[i] < target && nums[i+1] > target){
                return i+1;
            }
        }

        return n;
    }
};


//or this code where we just use the code of lower bound and it works pure fine

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0, high = n-1;
        int ans=n;
        while(low<=high){
            int mid = (low+((high-low)/2));
            if(nums[mid] == target) return mid;
            else if(nums[mid] >= target){
                ans=mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
