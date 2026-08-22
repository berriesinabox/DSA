class Solution {
private:
    void dfs(int sr , int sc , int inicolor , int newcolor , vector<vector<int>>& image){
        int r=image.size();
        int c=image[0].size();

        if(sr < 0 || sr >= r || sc < 0 || sc >= c || image[sr][sc] != inicolor){
            return;
        }

        image[sr][sc]=newcolor;

        dfs(sr-1,sc,inicolor,newcolor,image);
        dfs(sr+1,sc,inicolor,newcolor,image);
        dfs(sr,sc-1,inicolor,newcolor,image);
        dfs(sr,sc+1,inicolor,newcolor,image);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];

        if(inicolor != color){
            dfs(sr,sc,inicolor,color,image);
        }
        return image;
    }
};
