

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    if(head==NULL) return false;
    
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head;
    
    while(fast->next!=0&&fast->next->next!=0){
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast) return 1;
    }
    return 0;

}

