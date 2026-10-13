class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> arr;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    sum++;
                }
            }
            arr.push_back({sum,i});
        }
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i][1]);
        }
        return ans;
    }
};
