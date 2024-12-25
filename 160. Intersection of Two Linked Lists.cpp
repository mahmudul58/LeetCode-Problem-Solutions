/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ans=NULL;
        ListNode* temp=headA;
        while(headB!=NULL){
            if(headB==temp){
                ans=headB;
                break;
            }
            else if(temp==NULL){
                headB=headB->next;
                temp=headA;
            }
            else {
                temp=temp->next;
            }
        }
        return ans;
    }
};
