

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* m=NULL;
    m= new SinglyLinkedListNode(data);
    m->next = NULL;
    
    if(head==NULL){
        head=m;
        return head;
    }
    SinglyLinkedListNode* n=NULL;
    n=head;
    while(n->next!=NULL){
        n=n->next;
    }
    n->next = m;
    
    return head; 
}

