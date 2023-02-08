#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    stack<string> a;
    string st;
    
    while(n--){
        int x;
        cin >> x;
        int k;
        string s;
        switch (x)
        {
            case 1:
                cin >> s;
                a.push(st);
                st+=s;
                break;
            case 2:
                cin >> k;
                a.push(st);
                st.erase(st.size()-k);
                break;
            case 3:
                cin >> k;
                cout << st[k-1] << endl;
                break;
            case 4:
                st = a.top();
                a.pop();
                break;
        }
    }
    
    return 0;
}
