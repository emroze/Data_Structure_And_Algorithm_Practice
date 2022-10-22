class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int last=0,now=1;
        for(int i=2;i<=n;i++){
            int temp = now;
            now = last + now;
            last = temp;
        }
        return now;
    }
}; 
