

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* n=head2;
    while(head1!=NULL){
        n=head2;
        while(n!=NULL){
            if(head1==n) return head1->data;
            n=n->next;
        }
        head1=head1->next;
    }
    return 0;
}

