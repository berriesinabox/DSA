class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int digicount=0;
            int n=nums[i];
            while(n>0){
                n=n/10;
                digicount++;
            }
            if(digicount%2 == 0)
              count++;
        }
        return count;
    }
};

or

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i =0;i<nums.size();i++){
            int cnt=(int)(log10(nums[i])+1);
            if(cnt%2==0)
             count++;
        }
        return count;
    }
};
