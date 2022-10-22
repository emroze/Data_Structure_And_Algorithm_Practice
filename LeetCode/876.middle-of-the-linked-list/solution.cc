class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* n = head;
        int total = 0;
        while(n->next != nullptr){
            n = n->next;
            total++;
        }
        total++;
        total/=2;
        while(total--){
            head=head->next;
        }
        return head;
    }
};
