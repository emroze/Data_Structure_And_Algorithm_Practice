#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    char ch1=s[0],ch2=s[1],ch3=s[8];
    int x1=s[0]-48,x2=s[1]-48;
    x1= x1*10+x2;
    if(ch3=='A'&&ch1=='1') {s[0]='0';s[1]='0';}
    if(ch3=='P'&&x1!=12) {
        x1=x1+12;
        s[1]=(x1%10)+48;
        s[0]=(x1/10)+48;
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);
    for(int i=0;i<8;i++) fout << result[i];
    fout << "\n";

    fout.close();

    return 0;
}
