class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       string arr;
       vector<int> ans;
        for(int num : nums){
            arr += to_string(num);
        }
        for(int i = 0; i<arr.length();i++){
           ans.push_back(arr[i]-'0');
        }
        return ans;
    }
};
