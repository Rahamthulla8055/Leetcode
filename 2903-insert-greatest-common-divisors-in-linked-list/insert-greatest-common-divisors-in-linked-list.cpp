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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next!=NULL){
            int x = temp->val;
            ListNode* temp1 = temp->next;
            int y = temp1->val;
            ListNode* node = new ListNode();
            node->val = gcd(x,y);
            node->next = temp1;
            temp->next = node;
            temp=temp1;
        }
        return head;
    }
};