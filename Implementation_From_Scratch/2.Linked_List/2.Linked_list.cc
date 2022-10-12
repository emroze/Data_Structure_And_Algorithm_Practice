#include <bits/stdc++.h>

class Node{
public:
    int val;
    Node* next;
    Node* prev;
};

class linked_list{
public:
    linked_list(){
        // current = new Node();
        // head  = current;
        // tail = current;
        // head->prev = NULL;
        // head->next = NULL;
    }

    ~linked_list(){
        current = head;
        while(current!=NULL){
            Node* tmp = current->next;
            delete current;
            current = tmp;
        }  
    }

    void size(){
        
    }

    void push_back(int data){
        if(head==NULL){
            head = new Node();
            head->prev = NULL;
            head->next = NULL;
            head->val = data;
            tail = head;
        }
        else{
            Node* temp = new Node();
            temp -> val = data;
            temp -> next = NULL;
            temp -> prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    void pop_back(){
        if(head == NULL) {
            std::cout << "No more element left to pop" << std::endl;
        }
        else if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
        }
        else{
            Node* temp = tail->prev;
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }

    void push_front(int data){
        if(head==NULL){
            head = new Node();
            head->prev = NULL;
            head->next = NULL;
            head->val = data;
            tail = head;
        }

        else{
            Node* temp = new Node();
            temp -> val = data;
            temp -> next = head;
            temp -> prev = NULL;
            head->prev = temp;
            head = temp;
        }
    }

    void pop_front(){
        if(head == NULL) {
            std::cout << "No more element left to pop" << std::endl;
        }
        else if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
        }
        else{
            Node* temp = head->next;
            delete head;
            head = temp;
            head->prev = NULL;
        }
    }

    bool empty(){
        if(head==NULL){
            return true;
        }
        return false;
    }

    int front(){
        return head->val;
    }
    
    int back(){
        return tail->val;
    }

    int size_(){
        Node* temp = head;
        int i=0;
        while(temp!=NULL){
            i++;
            temp = temp->next;
        }
        return i;
    }

    int value_at(int index){
        if(index == 0){
            return head->val;
        }
        if(index > (size_()-1)){
            std::cout << "Out of Index" << std::endl;
            return 0;
        }
        Node* temp = head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->val;
    }

    void insert(int index, int data){
        
    }
    
    void prnt(){
        Node* temp = head;

        while(temp!=NULL){
            std::cout << temp->val << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

private:
    Node* current = NULL;
    Node* head = NULL;
    Node* tail = NULL;
};

int main(){
    linked_list ll;
    ll.push_back(15);
    ll.push_back(15);
    ll.push_back(15);
    ll.push_back(15);
    ll.push_front(13);
    ll.push_front(14);
    ll.pop_back();
    ll.prnt();
    std::cout << "0=" << ll.value_at(0) << std::endl;
    std::cout << "1=" << ll.value_at(1) << std::endl;
    std::cout << "2=" << ll.value_at(2) << std::endl;
    ll.prnt();
    ll.pop_front();
    ll.prnt();
    ll.pop_front();
    ll.prnt();
    ll.pop_front();
    std::cout << "Empty" << ll.empty() << " " << ll.size_()<< std::endl;
    return 0;
}