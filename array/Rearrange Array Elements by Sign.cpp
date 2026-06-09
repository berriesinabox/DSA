class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int> ans;
        int a=0,b=0;
        for(int num : nums){
            if(num >= 0){
                pos.push_back(num);
            }else{
                neg.push_back(num);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i % 2 == 0){
                ans.push_back(pos[a]);
                a++;
            }else{
                ans.push_back(neg[b]);
                b++;
            }
        }
        return ans;
    }
};
