#include <iostream>
#include <vector>
using namespace std;

void pr(vector<int> arr){
    for(int l=0;l<arr.size();l++){
                        cout<<arr[l]<<" ";
                }
    cout<<endl;
}

void sort(int x, vector<int> arr){
for(int i=0; i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            int j=i,k=arr[i+1];
            while(j>=0&&(arr[j]>k)){
                arr[j+1]=arr[j];
                j--;
                }
            arr[j+1]=k;
        }
        pr(arr);
    
    }    
}

int main(){
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(n,arr);
    return 0;
}
