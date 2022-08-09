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
   /*void swap(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    } */
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* kth = NULL;
       
        while(--k){
            ptr1 = ptr1->next;
        }
        //a = ptr1->val;
        kth = ptr1;
        ptr1 = ptr1->next;
        
        while(ptr1){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        // swapping function 
        //int temp = t->val;
        //t->val = ptr2->val;
       // ptr2->val = temp;
        swap(ptr2->val,kth->val);
        return head;  
    }
};