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
        ListNode* prev = NULL, *cur = head, *temp;
        while(cur){
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
      /* int length = 1;
        ListNode* ptr = head;
        while(ptr!=NULL){
            length++;
            ptr = ptr->next;
        }
        int total = 0;
        int x = 0;
        int i = length-1;
        // suppose length = 3 then the length-1 must be multiplied with head->val and then head must be move ahead
        while(head!=NULL){
            x = head->val;
            total += pow(2,i)*x;
            head = head->next;
            i--;
        }
        return total;*/
        ListNode* temp = reverse(head);
        int x, total = 0, i = 0;
        while(temp != NULL){
            x = temp->val;
            total = total + pow(2,i)*x;
            i++;
            temp = temp->next;
        }
        return total;
    }
};