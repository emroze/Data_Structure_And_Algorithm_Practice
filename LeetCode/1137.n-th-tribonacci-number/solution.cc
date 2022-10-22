class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        
        int now=1,last=1,old=0;
        
        for(int i=3;i<=n;i++){
            int temp = now;
            now = now + last + old;
            old = last;
            last = temp;
        }
        return now;
    }
};
