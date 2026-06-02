class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low =0;
        long long high=num;
        //long long ans;
        while(low <= high){
            long long mid = low + (high-low)/2;
            if(mid*mid == num){
                //ans=mid;
                return true;
            }
            else if(mid*mid < high){
                //ans= mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};
