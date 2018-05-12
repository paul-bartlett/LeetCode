/**
 * You are given two non-empty linked lists representing two non-negative integers. 
 * The digits are stored in reverse order and each of their nodes contain a single digit. 
 * Add the two numbers and return it as a linked list.
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* link1 = l1;
        ListNode* link2 = l2;
        ListNode* result = new ListNode(0);
        ListNode* head = result;
        int carry = 0;
        int sum = 0;
        while(link1 != NULL || link2 != NULL) {
            // Check for null nodes
            if(link1 == NULL) {
                sum = link2->val + carry;
                link2 = link2->next;
            } else if(link2 == NULL) {
                sum = link1->val + carry;
                link1 = link1->next;
            } else {
                sum = link1->val + link2->val + carry;
                link1 = link1->next;
                link2 = link2->next;
            }
            // Handle carry for next number
            if(sum > 9) {
                carry = 1;
                sum %= 10;
            } else {
                carry = 0;
            }
            // Create node and set to next
            result->next = new ListNode(sum);
            result = result->next;
        }
        // Last pass for carry
        if(carry == 1) {
            result ->next = new ListNode(carry);
        }
        return head->next;
    }
};