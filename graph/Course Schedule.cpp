class Solution {
private:
    bool dfs(int node , int parent , vector<vector<int>>& adj , vector<int>& vis , vector<int>& pathvis){
        vis[node]=1;
        pathvis[node]=1;
        for(auto adja:adj[node]){
            if(!vis[adja]){
                if(dfs(adja,node,adj,vis,pathvis)) return true;
            }
            else if(pathvis[adja]){
                return true;
            }
        }
        pathvis[node]=0;
        return false;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for(auto i : prerequisites){
            adj[i[1]].push_back(i[0]);
        }

        vector<int> vis(numCourses,0);
        vector<int> pathvis(numCourses,0);


        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i,-1,adj,vis,pathvis))return false;
            }
        }
        return true;
    }
};
