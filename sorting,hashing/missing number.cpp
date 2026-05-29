//brute force from my end

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        for(int i =0 ;i<=nums.size();i++){
            if(mp[i]==0)
            return i;
        }
        return -1;
    }
};

//optimal solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum = n*(n+1)/2;

        for(int num: nums){
            sum = sum - num;
        }
        return sum;
    }
};
