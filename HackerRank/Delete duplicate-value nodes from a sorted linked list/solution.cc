

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* n=head;
    while(n->next!=NULL){
        if(n->data==n->next->data){
            n->next=n->next->next;
            continue;
        }
        if(n->next==NULL) return head;
        n=n->next;
    }
    return head;
    

}

