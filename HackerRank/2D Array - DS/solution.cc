#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int s = 6,old_sum=0,sum = 0;
    bool t = false;
    for(int i=0;i<s-2;i++){
        for(int j=0;j<s-2;j++){
            sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(t==false){
                old_sum = sum;
                t= true;
            }
            else {
                if(sum>old_sum) old_sum = sum;
            } 
        }
    }
    return old_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
