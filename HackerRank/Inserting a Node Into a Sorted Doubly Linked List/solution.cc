
typedef DoublyLinkedListNode node;
// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    node* n=head;
    node* nn=new node(data);
    if(data<=n->data) {
        nn->next=head;
        return nn;
    }
    while(n!=NULL&&n->next!=NULL){
        if(n->data<=data&&data<=n->next->data){
            nn->next=n->next;
            nn->prev=n;
            n->next=nn;
            nn->next->prev=nn;
            return head;
            
        } 
        n=n->next;
    }
    n->next=nn; 
    return head;
}

