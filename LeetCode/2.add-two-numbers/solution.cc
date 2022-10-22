class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode((l1->val+l2->val)%10);
        ListNode* s = sum;
        int car = (l1->val+l2->val)/10;
        int n1 = 0;
        int n2 = 0;
        
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1 != nullptr){
            n1 = l1->val;
            if(l2 != nullptr) n2=l2->val;
            else n2 = 0;
            s->next = new ListNode((n1+n2+car)%10);
            car = (n1+n2+car)/10;
            s = s->next;
            
            l1 = l1->next;
            if(l2!=nullptr) l2 = l2->next;
        }
        
        while(l2!=nullptr){
            n2 = l2->val;
            s->next = new ListNode((n2+car)%10);
            car = (n2+car)/10;
            s = s->next;
            
            l2 = l2->next;
        }
        
        if(car>0) s->next = new ListNode(car);
        
        return sum;
    }
};