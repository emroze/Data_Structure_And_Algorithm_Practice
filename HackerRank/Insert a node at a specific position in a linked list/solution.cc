

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* new_entry = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp=head;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    new_entry->next = temp->next;
    temp->next=new_entry;
    return head;

}

