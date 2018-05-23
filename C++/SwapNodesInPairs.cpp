/**
 * Given a linked list, swap every two adjacent nodes and return its head.
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* Node1 = head;
        ListNode* Node2;
        ListNode* swapHead;
        if(Node1 != NULL) {
            Node2 = Node1->next;
            if(Node2 != NULL) {
                swapHead = Node2;
            } else {
                return head;
            }
        } else {
            return head;
        }
        
        while(Node1 != NULL && Node2 != NULL) {
            Node1->next = Node2->next;
            Node2->next = Node1;
            Node1 = Node1->next;
            if(Node1 != NULL) {
                Node2 = Node1->next;
            }
        }
        return swapHead;
    }
};