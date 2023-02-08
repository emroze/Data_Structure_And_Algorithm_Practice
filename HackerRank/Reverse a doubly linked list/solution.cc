
typedef DoublyLinkedListNode node;
// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    node* n=head;
    node* x=head;
    while(n->next!=NULL) n=n->next;
    
    while(true) {
        swap(n->data,head->data);
        if(head->next==n||head==n) break;
        n=n->prev;
        head = head->next;
        
    }
    
    return x;

}

