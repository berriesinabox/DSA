class Solution {
public:
    int digitFrequencyScore(int n) {
      int temp=n;
      int sum=0;
      while(temp !=0){
        sum += temp%10;
        temp=temp/10;
      } 
      return sum; 
    }
};
