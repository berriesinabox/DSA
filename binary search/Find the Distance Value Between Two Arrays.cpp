class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;

        for(int w : arr1){
            int low=0 , high = arr2.size()-1;
            bool valid = true;

            while(low <= high){
                int mid = low + (high-low)/2;
                if(abs(w-arr2[mid]) <= d){
                    valid=false;
                    break;
                }
                else if(arr2[mid] < w){
                    low=mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            if(valid){
                count++;
            }
        }
        return count;
    }
};
