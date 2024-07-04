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
    ListNode* mergeNodes(ListNode* head) {
       ListNode* t1 = head->next;
       ListNode* t2 = head->next;
       while(t1)
       {
         int sum = 0;
         while(t2->val != 0)
         {
            sum += t2->val;
            t2 = t2->next;
         }
         t1->val = sum;
         t2 = t2->next;
         t1->next = t2;
         t1 = t1->next;

       }
      return head->next;
    }
};