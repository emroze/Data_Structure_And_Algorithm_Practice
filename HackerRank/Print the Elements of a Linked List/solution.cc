

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* n=NULL;
    n=head;
    while(n!=NULL){
            cout<<n->data<<"\n";
            n=n->next;
    }

}

