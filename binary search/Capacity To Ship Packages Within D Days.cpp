class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0;
        for(int w : weights){
            low=max(low,w);
            high += w;
        }
        while(low < high){
            int mid = low + (high-low)/2;
            int daysreq=1;
            int load=0;
            for(int w : weights){
                if(load+w > mid){
                    daysreq++;
                    load=w;
                }
                else{
                    load += w;
                }
            }
            if(daysreq <= days){
                high = mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
