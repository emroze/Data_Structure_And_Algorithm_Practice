class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<(size(s)/2);i++){
            int temp = s[i];
            s[i] = s[size(s)-1-i];
            s[size(s)-1-i] = temp;
        }
    }
};
