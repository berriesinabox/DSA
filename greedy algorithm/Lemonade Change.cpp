class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_dollar=0;
        int ten_dollar=0;
        int twenty_dollar=0;
        for(int i=0 ; i<bills.size();i++){
            if(bills[i] == 5){
                five_dollar++;
            }
            else if(bills[i] == 10){
                five_dollar--;
                ten_dollar++;
                if(five_dollar < 0){
                    return false;
                }
            }
            else{
                twenty_dollar++;
                if(ten_dollar >= 1){
                    ten_dollar--;
                    five_dollar--;
                }else{
                    five_dollar -= 3;
                }
                if(five_dollar < 0){
                    return false;
                }
            }
        }
        return true;
    }
};
