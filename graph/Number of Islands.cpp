class Solution {
private:
    void dfs(int r ,int c , vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();

        if(r < 0 || r >=n || c < 0 || c >= m || grid[r][c] == '0'){
            return;
        }

        grid[r][c]='0';

        dfs(r-1,c,grid);
        dfs(r+1,c,grid);
        dfs(r,c-1,grid);
        dfs(r,c+1,grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j] == '1'){
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
};
