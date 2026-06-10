class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return oddcount(nums,k) - oddcount(nums,k-1);
    }
private:
    int oddcount(vector<int>& nums , int k){
        int count;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i] % 2 == 1){
            nums[i]=1;
           }else{
            nums[i]=0;
           } 
        }
        for(int right=0;right<nums.size();right++){
            sum += nums[right];

            while(sum > k){
                sum -= nums[left];
                left++;
            }
            count += right-left+1;
        }
        return count;
    }
};
