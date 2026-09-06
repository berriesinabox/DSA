class Solution {
    
  private:
        int dfs(vector<vector<int>>& adj , vector<int>& path , int i ,stack<int>& st){
            path[i]=1;
            for(auto it : adj[i]){
                if(!path[it]){
                    dfs(adj,path,it,st);
                }
            }
            st.push(i);
        }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> path(V,0);
        stack<int> st;
        vector<int> res;
        for(int i=0;i<V;i++){
            if(!path[i]){
                dfs(adj,path,i,st);
            }
        }
        
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        
        return res;
    }
};
