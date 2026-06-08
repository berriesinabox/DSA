class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesserpart;
        int count=0;
        vector<int>greaterpart;
        for(int i:nums){
            if(i < pivot){
                lesserpart.push_back(i);
                
            }
            if(i > pivot){
                greaterpart.push_back(i);
                
            }
            if(i == pivot){
                count++;
            }
        }
        while(count !=0){
            lesserpart.push_back(pivot);
            count--;
        }

        for(int x:greaterpart){
            lesserpart.push_back(x);
        }

        return lesserpart;
    }
};
