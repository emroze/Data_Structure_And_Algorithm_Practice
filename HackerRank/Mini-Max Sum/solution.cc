#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    vector<unsigned long long > a;
    unsigned long long sum=0;
    for(int j=0;j<arr.size();j++) sum=sum+arr[j];
    for(int i=0;i<arr.size();i++) a.push_back((sum-arr[i]));
    unsigned long long min=a[0],max=a[0];
    for(int i=1;i<a.size();i++){
        if(max<a[i]) max=a[i];
    } 
    for(int i=1;i<a.size();i++){
        if(min>a[i]) min=a[i];
    } 
    cout<<min<<" "<<max<<endl;
}
int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
