#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class node
{
    public:
        int data;
       // node* next;
        node* prev;
        node(int d){
            this->data=d;
           // this->next=nullptr;
            this->prev=nullptr;
        }
};

node* push(node* last,int data){
    node* n= new node(data);
    if(last==NULL){
           return n;
    }
   // last->next = n;
    n->prev = last;
    
    return n;
}

node* del(node* last){
    
    if(last->prev==NULL){
        return NULL;
    }
    //node* temp=last;
    //last=last->prev;
    //last->next=NULL;
    //delete  temp;
    return last->prev;
}

int max(node* last){
    if(last==NULL) return 0;
    int max = last->data;
    while(last!=NULL){
        if(last->data>max) max=last->data;
        last=last->prev;
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    node* last = NULL;
    int n,x,highest=0;
    cin>>n;
    for (int i=0;i<n;i++){
        int k;
        cin>> k;
        switch(k){
            case 1:
                cin>>x;
                last = push(last,x);
                if(last->data>highest) highest=last->data;
                break;
            case 2:
                x = last->data;
                last=del(last);
                if(x==highest) highest=max(last);
                break;
            case 3:
                cout<<highest<<"\n";
                break;
            
        }
        
    } 
    return 0;
}
