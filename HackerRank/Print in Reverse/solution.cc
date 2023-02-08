
#include <vector>

// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    vector<int> p;
    while(head!=NULL){
        p.push_back(head->data);
        head=head->next;
    }
    for(int i=p.size()-1;i>=0;i--){
        cout<<p[i]<<"\n";
    }

}

