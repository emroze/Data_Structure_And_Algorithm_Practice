#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int shared = 5,cmltv = 0, liked=0;
    for(int i=1;i<=n;i++){
        liked = shared/2;
        cmltv+=liked;
        shared = 3*liked;
    }
    return cmltv;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
