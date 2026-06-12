class Solution {
public:
    int mirrorDistance(int n) {
        int x=0;
        int temp=n;
        int rev=0;
        while(temp !=0){
            rev = (rev*10) + (temp%10);
            temp=temp/10;
        }
        x=abs(n-rev);
        return x;
        
    }
};
