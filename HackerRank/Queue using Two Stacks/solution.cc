#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int query,val;
    cin >> query;
    stack<int> front,rear;
    while(query--){
        int q;
        cin >> q;
        if(q==1){
            cin >> val;
            rear.push(val);
        }
        else{
            if(front.empty()){
                while(!rear.empty()){
                    front.push(rear.top());
                    rear.pop();
                }
            }
            
            if(!front.empty()){
                if(q==2){
                    front.pop();
                }
                if(q==3){
                    cout << front.top() << endl;
                }
                
            }
        }
        
        
    }
    return 0;
}
