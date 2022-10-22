class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int i=0;
        
        if(head->next==nullptr) return nullptr;
        
        while(temp != nullptr){
            i++;
            temp= temp->next;
        }
        cout << i << endl;
        cout << n << endl;
        temp = head;
        if(i==n) return head->next;
        int j=i-n;
        for(int k=1;k<j;k++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
