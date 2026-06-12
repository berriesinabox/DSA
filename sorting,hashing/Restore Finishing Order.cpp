class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st(friends.begin(),friends.end());
        vector<int> id;
        for(int i : order){
            if(st.count(i) == 1){
                id.push_back(i);
            }
        }
        return id;
    }
};
