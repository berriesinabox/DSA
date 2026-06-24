class Solution {
public:
    int minimumSum(int num) {
        int temp=num;
        vector<int> arr;
        while(temp !=0){
            int k=temp%10;
            arr.push_back(k);
            temp = temp/10;
        }
        sort(arr.begin(),arr.end());

        int num1=arr[0]*10+arr[2];
        int num2=arr[1]*10+arr[3];
        return num1+num2;
    }
};
