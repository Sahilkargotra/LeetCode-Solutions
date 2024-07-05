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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);
         int first = -1;
            int last = -1;
            int dist = 1;
            int minDist = INT_MAX;
        if(head->next->next == nullptr) return ans;
        ListNode*temp = head;
        while(temp->next->next)
        { 
           if((temp->next-> val < temp->val && temp->next->val < temp->next->next->val)||
                (temp->next-> val > temp->val && temp->next->val > temp->next->next->val))
           { 
            if(first == -1) first = dist;
            else{
            minDist = min(minDist,dist-last);
            }
            last = dist;
           }
           temp = temp->next;
           dist += 1;
           
           if(first != -1 && last != first)
           {
            ans[0] = minDist;
            ans[1] = last-first;
           }
        }
        return ans;
    }
};