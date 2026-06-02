class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterDuration.size();

        int ans = INT_MAX;

        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                //first L:W
                int land_time=landStartTime[i] + landDuration[i];
                int land_water=max(land_time , waterStartTime[j]);
                int land_water_finish=land_water + waterDuration[j];

                // nexr W:L
                int water_time = waterDuration[j] + waterStartTime[j];
                int water_land = max(water_time , landStartTime[i]);
                int water_land_finish=water_land + landDuration[i];

                ans= min(ans, min(land_water_finish, water_land_finish));
            }
        }
        return ans;
    }
};

//this was not EASY
