#include <iostream>
#include <vector>
using namespace std;

int main(){
    long n,m,p,q,k,max=0,sum=0;
    cin>>n>>m;
    vector<long> a(n+1);
    for(int i=0;i<n+1;i++) a[i]=0;
    
    for(int i=0;i<m;i++){
        cin>>p>>q>>k;
        a[p] += k;
        if((q+1)<=n) a[q+1]-=k;
        
    }
    for(int i=1;i<n+1;i++){
       sum += a[i];
       if(max<sum) max = sum; 
    }
    cout<<max<<endl;
    return 0;
}
