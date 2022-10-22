class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        
        for(int i=0;i<size(s);i++){
            start = i;
            while(s[i] != ' ' && i<size(s)){
                i++;
            }
            end=i-1;
            for(int j=0; j<=(end-start)/2;j++){
                int temp = s[start+j];
                s[start+j] = s[end-j];
                s[end-j] = temp;
            }
        }
        return s;
    }
    
};
