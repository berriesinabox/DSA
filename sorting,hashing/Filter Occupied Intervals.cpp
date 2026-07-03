class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        
        vector<vector<int>> merged;
        
        sort( occupiedIntervals.begin(), occupiedIntervals.end());

        merged.push_back(occupiedIntervals[0]);
        
        for(int i=1;i<occupiedIntervals.size();i++){
            if(occupiedIntervals[i][0] <= merged.back()[1]+1){
                merged.back()[1]=max(merged.back()[1],occupiedIntervals[i][1]);
            }
            else{
                merged.push_back(occupiedIntervals[i]);
            }
        }

        vector<vector<int>> ans;
        for(auto &ar : merged){
            int l=ar[0];
            int r=ar[1];

            if(r < freeStart || l > freeEnd){
                ans.push_back(ar);
            }
            else{
                if(l < freeStart){
                ans.push_back({l,freeStart-1});
                }
                if(r > freeEnd){
                ans.push_back({freeEnd+1,r});
                }
            }
        }
        return ans;
    }
};
