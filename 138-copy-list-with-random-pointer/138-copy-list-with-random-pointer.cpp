/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

/* 1st Naive Approach is to use extra space by using a data structure hashmap 
   2nd Solution is to follow a method which I am writing below kindof pseudocode
   // Make a list using traversing which contains all the nodes original as well as duplicate 
   // Connect random pointer as well 
   // seperate the copied list  because we have to return only copied node list so here we will use a dummy node and will return dummy->next
*/

class Solution {
public:
    Node* copyRandomList(Node* head){
        Node *current = head;
        Node *next;
        while(current != NULL){
            next = current->next; // we are using a next pointer here so that we dont loose this value while traversing because we need this value as well in our linked list 
            Node* copy = new Node(current->val);
            current->next = copy;
            copy->next = next;
            current = next; // move the current ointer to the next original node
        }
        current = head;
        while(current != NULL){
            if(current->random!=NULL){
                current->next->random = current->random->next;// let me explain this line 
                // the copy of current original node is in current->next and we need to assign random pointer value of that node so we are using current->next->random is equal to  current->random->next;
            }
            current = current->next->next;
        }
        // 3rd step
        current = head;
        Node* dummy = new Node(0);
        Node* copy;
        Node* copyTail = dummy;
        while(current!=NULL){
            next =current->next->next;
            copy = current->next;
            copyTail->next = copy;
            copyTail = copy;
            // restore the original linked list 
            current->next = next;
            current = next;}
            return dummy->next;
    }
};