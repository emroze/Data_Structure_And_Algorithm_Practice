
#include <vector>
// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    SinglyLinkedListNode* temp=head1;
    vector<int> a;
    while(temp->next!=NULL) temp=temp->next;
    temp->next = head2;
    temp=head1;
    while(temp!=NULL){
        a.push_back(temp->data);
        temp=temp->next;
    }
    temp=head1;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        temp->data=a[i];
        temp=temp->next;
    }
    return head1;

}

