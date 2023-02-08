#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the largestRectangle function below.
long largestRectangle(vector<int> h) {
    long max = 0;
    stack<long> pos,hgt,area,area_pos;
    pos.push(0);
    hgt.push(h[0]);
    for(int i=1;i<h.size();i++){
        if(!hgt.empty()&&h[i]<hgt.top()){
            run:
            int a = hgt.top()*(i-pos.top());
            if(max<a) max=a;
            area.push(a);
            area_pos.push(pos.top());
            hgt.pop();
            
            if(!hgt.empty()&&h[i]<hgt.top()) {pos.pop();goto run;};
            
            hgt.push(h[i]);
        }
        else if(hgt.empty()||h[i]>hgt.top()){
            pos.push(i);
            hgt.push(h[i]);
        }
        
        
    }
    while(!hgt.empty()){
        x:
        int i = h.size();
        int a = hgt.top()*(i-pos.top());
        if(max<a) max=a;
        area.push(a);
        area_pos.push(pos.top());
        hgt.pop();
        pos.pop();
        
    }
    
    
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    long result = largestRectangle(h);

    fout << result << "\n";

    fout.close();

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
