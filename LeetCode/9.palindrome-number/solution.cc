class Solution {
public:
    bool isPalindrome(int x) {
        long long num=0,rem=0, a=x;
        
        if(x<0) return false;
        
        while(x){
            rem = x%10;
            x/=10;
            num = num*10+rem;
        }
        return num==a;
    }
};
