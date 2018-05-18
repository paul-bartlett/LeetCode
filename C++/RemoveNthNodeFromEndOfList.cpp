/**
 * Given a linked list, remove the n-th node from the end of list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *previousNode = NULL; // previous to remove for linking
        ListNode *removeNode = head; // node to remove
        ListNode *traverseNode = head; // traverse to end of list
        // Move front node ahead of remove node by 2
        for(int i = 0; i < n; i++) {
            traverseNode = traverseNode->next;
        }
        // Shift all nodes to the end of linked list
        while(traverseNode != NULL) {
            traverseNode = traverseNode->next;
            previousNode = removeNode;
            removeNode = removeNode->next;
        }
        // Remove head
        if(previousNode == NULL) {
            head = head->next;
            delete removeNode;
        } 
        // Remove middle
        else if(removeNode->next != NULL) {
            previousNode->next = removeNode->next;
            delete removeNode;
        } 
        // Remove last
        else {
            previousNode->next = NULL;
            delete removeNode;
        }
        return head;
    }
};