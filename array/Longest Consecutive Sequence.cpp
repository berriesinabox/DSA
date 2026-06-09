class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>hashset;
        int maxseq=1;
        for(int num : nums){
         hashset.insert(num);
        } 
        int cnt=1;
        vector<int> arr(hashset.begin(), hashset.end());
        for(int i=0;i<arr.size()-1;i++){
        if(arr[i]+1==arr[i+1]){
            cnt++;
        }else{
            cnt=1;
        }
        maxseq=max(maxseq,cnt);
       }
       return maxseq;
    }
};
