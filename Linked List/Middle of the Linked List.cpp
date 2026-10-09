/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* temp = head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        int mid = (cnt/2);
        ListNode* temo = head;
        while(mid !=0){
            temo=temo->next;
            mid--;
        }
        return temo;
    }
};
