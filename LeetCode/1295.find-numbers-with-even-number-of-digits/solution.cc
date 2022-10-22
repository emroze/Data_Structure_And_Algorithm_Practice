class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int mv= 0;
        for(auto x:nums){
            int count = 0;
            while(x){
                x/=10;
                count++;
            }
            if(count%2==0) mv++;
        }
        return mv;
    }
};
