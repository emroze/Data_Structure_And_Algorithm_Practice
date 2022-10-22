class Solution {
public:
    int firstBadVersion(int n) {
        int left=0;
        int right=n;
        while(left<right){
            bool x = isBadVersion(left+(right-left)/2+1);
            bool y = isBadVersion(left+(right-left)/2);
            if(x==true && y==false) return (left+(right-left)/2+1);
            if(x==false) left=(left+(right-left)/2);
            else right = (left+(right-left)/2);
        }
        return left;
    }
};
