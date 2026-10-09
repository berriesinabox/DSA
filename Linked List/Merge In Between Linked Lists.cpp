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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        int i=0;
        while(i < a - 1) {
            temp1 = temp1->next;
            i++;
        }
        //ListNode* newNode = new ListNode(temp1);
        while(temp2->next != NULL) {
            temp2 = temp2->next;
        }
        ListNode* temp3 = list1;
        for(int i=0;i<=b;i++){
            temp3=temp3->next;
        }
        temp1->next = list2;
        temp2->next = temp3;

        return list1;
    }
};
