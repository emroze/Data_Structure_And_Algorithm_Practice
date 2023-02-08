#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    if(s.size()%2!=0) return "NO";
    
    stack<char> str;
    for(auto c:s){
        switch (c){
            case '[':
            case '{':
            case '(':
                str.push(c);
                break;
            case ')':
                if(str.empty()||str.top()!='(') return "NO";
                str.pop();
                break;
            case '}':
                if(str.empty()||str.top()!='{') return "NO";
                str.pop();
                break;
            case ']':
                if(str.empty()||str.top()!='[') return "NO";
                str.pop();
                break;
        }           
    }
    return (str.empty()? "YES":"NO");

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
