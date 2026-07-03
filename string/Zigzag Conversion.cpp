class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        vector<string> arr(numRows);
        int row=0;
        int dir=1;
        string ans ="";
        for(int i=0;i<s.length();i++){

            arr[row].push_back(s[i]);
            if(row == 0){
                dir = 1;
            }
            if(row == numRows-1){
                dir = -1;
            }
            row += dir;
        }
        for(string ch : arr){
            ans +=ch;
        }
        return ans;
    }
};
