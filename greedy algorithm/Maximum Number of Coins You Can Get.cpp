class Solution {
public:
    int maxCoins(vector<int>& piles) {
       sort(piles.begin(),piles.end());

       int left=0;
       int n=piles.size();
       int right= n-2;
       int ans=0;
    
       while(left < right){
            ans += piles[right];
            left++;
            right -= 2;
       }
       return ans;
    }
};

// 1 2 2 4 7 8
// l=0 r=4 a=0
//loop
//0<4 a=7 l=1 r=2
//1<2 a=7+2 l=2 r=0
//ans=9
