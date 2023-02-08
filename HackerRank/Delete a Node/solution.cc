

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(position == 0) return head->next;
    SinglyLinkedListNode* n=head;
    for(int i=0;i<position-1;i++) n=n->next;
    n->next=n->next->next;
    return head;
}

