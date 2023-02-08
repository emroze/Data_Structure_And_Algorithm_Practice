

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    vector<int> p;
    SinglyLinkedListNode* n=head;
    while(head!=NULL){
        p.push_back(head->data);
        head=head->next;
    }
    head = n;
    for(int i=p.size()-1;i>=0;i--){
        head->data = p[i];
        head = head->next;
    }
    return n;
}

