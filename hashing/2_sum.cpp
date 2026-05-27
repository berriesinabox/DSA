//optimal solution o(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map <int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target - nums[i]) != mpp.end()){   //complement check ho raha 
                ans.push_back(mpp[target - nums[i]]); // traversing in map
                ans.push_back(i);     // returning index too map me
                return ans;             // if found wala ans yaha se
            }
            mpp[nums[i]]=i;             // if not found map me store yaha se
        }
        return ans;                    // ans hua to theek warna vacant vector ans me jayega
    }
};

//brute force solution o(n2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int , int>> ans;
        int n=nums.size();
        for(int i =0;i < n ; i++){
            for(int j=i+1; j < n ;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
