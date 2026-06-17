class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       int child=0,greed=0;
       int greed_size=s.size();
       int child_size=g.size();
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
       while(child < child_size && greed < greed_size){
        if(g[child] <= s[greed]){
            child += 1;
        }
        greed += 1;
       }
       return child; 
    }
};
