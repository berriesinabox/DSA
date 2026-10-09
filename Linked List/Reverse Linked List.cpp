class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp1 = head;
        vector<int> arr;

        while(temp1 != NULL) {
            arr.push_back(temp1->val);
            temp1 = temp1->next;
        }

        int n = arr.size();

        if(n == 0) return NULL;

        ListNode* newNode = new ListNode(arr[n-1]);
        ListNode* ans = newNode;

        for(int i = n-2; i >= 0; i--) {
            ListNode* temp = new ListNode(arr[i]);
            newNode->next = temp;
            newNode = temp;
        }

        return ans;
    }
};
