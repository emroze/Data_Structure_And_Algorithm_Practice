#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int diff(int x,int y){
    return (x>y)?(x-y):(y-x);
}

int cost(int x[],int y[]){
    int cst = 0;
    for(int i=0;i<9;i++){
        cst += diff(x[i],y[i]);
    }
    return cst;
}
int formingMagicSquare(vector<vector<int>> s) {
    int arr[9];
    int mgc_mtrx[8][9] = {
            {8, 1, 6, 3, 5, 7, 4, 9, 2},
            {6, 1, 8, 7, 5, 3, 2, 9, 4},
            {4, 9, 2, 3, 5, 7, 8, 1, 6},
            {2, 9, 4, 7, 5, 3, 6, 1, 8}, 
            {8, 3, 4, 1, 5, 9, 6, 7, 2},
            {4, 3, 8, 9, 5, 1, 2, 7, 6}, 
            {6, 7, 2, 1, 5, 9, 8, 3, 4}, 
            {2, 7, 6, 9, 5, 1, 4, 3, 8},
            };
    int pos=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           arr[pos]=s[i][j];
           pos++; 
        }
    }
    int min_cost=cost(arr,mgc_mtrx[0]);
    for(int i=1;i<8;i++){
        int x = cost(arr,mgc_mtrx[i]);
        if(x<min_cost) min_cost = x;
    }
    return min_cost;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
