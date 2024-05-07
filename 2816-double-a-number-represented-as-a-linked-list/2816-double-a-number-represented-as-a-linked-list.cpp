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
 private:
  ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* newHead = reverseList(head->next);
        ListNode* front  = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
public:
    ListNode* doubleIt(ListNode* head) {
       ListNode* newHead =  reverseList(head);
       ListNode* curr = newHead;
       int carry = 0;
       while(curr)
       {
        int sum  = carry + ((curr->val)*2);
        curr->val = (sum%10);
        carry = sum/10;
        
        if(carry >0 && curr->next == nullptr){
         curr->next = new ListNode(carry);
        curr = curr->next;
        carry = 0;
       }
       curr = curr->next;
       }
        return reverseList(newHead);
    }
};