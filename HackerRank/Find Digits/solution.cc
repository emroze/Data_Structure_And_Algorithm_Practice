#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    vector<int> el;
    int x = n;
    int i=0;
    while(x){
        i++;
        el.push_back(x%10);
        x/=10;
    }
    x=0;
    
    for(int i=0;i<el.size();i++){
        if(el[i]==0) continue;
        if(n%el[i]==0) x++;
       
        
    }
    return x;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
