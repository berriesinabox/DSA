class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,maxfruits=0;
        unordered_map<int,int>mpp;
        for(int right=0;right<fruits.size();right++){
            mpp[fruits[right]]++;
            while(mpp.size() > 2){
                mpp[fruits[left]]--;

                if(mpp[fruits[left]] == 0){
                    mpp.erase(fruits[left]);
                }
                left++;
            }
            maxfruits=max(maxfruits,right-left+1);
        }
        return maxfruits;
    }
};
