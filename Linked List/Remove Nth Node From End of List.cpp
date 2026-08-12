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

    int lengthofll(ListNode* head){
        int cnt=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;

        int p=lengthofll(head);
        int k=p-n+1;

        if(k==1){
            // ListNode* temp=head;
            // head=head->next;
            //free(temp);
            return head=head->next;
        }
        int cnt=0;
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp != NULL){
            cnt++;
            if(cnt == k){
                prev->next=temp->next;
                //free(temp);
                return head;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};
