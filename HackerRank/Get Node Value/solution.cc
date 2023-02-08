

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int i=0;
    SinglyLinkedListNode* temp=head;
    while(temp!=NULL) {temp=temp->next;i++;}
    i--;
    temp = head;
    int pos = i-positionFromTail;
    for(int j=0;j<pos;j++) temp=temp->next;
    return temp->data;

}

