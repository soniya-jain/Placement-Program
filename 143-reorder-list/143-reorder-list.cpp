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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxt = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        /* Approach: 
        1. find the middle of linked list 
        2. reverse the second Linked List 
        3. Merge the two Linked lists 
        */
        // Finding the middle of Linked List
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // Reversing the linked list
        ListNode* second = reverse(slow->next);
        slow->next = NULL; // break the link and make them two seperate linked list
        ListNode* first = head;
        /*ListNode* temp1;
        ListNode* temp2;*/
        while(second){
            ListNode* temp1 = first->next;
            first->next = second;
            ListNode* temp2 = second->next;
            second->next = temp1;
            first = temp1; // to move first ahead
            second = temp2; // to move second ahead
        }
    }
};