class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vect(nums.size(), 0);
        int mul=1,zero=0,zero_pos=0;
        
        for(int i=0;i<nums.size();i++){
            mul=mul*nums[i];
            if(nums[i]==0){
                zero++;
                zero_pos=i;
            }
        }
        
        if(zero>=2){
            return vect;
        }
        else if(zero == 1){
            int mult=1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) mult *= nums[i];
            }
            vect[zero_pos] = mult;
            return vect;
        }
        else{
            for(int i=0;i<nums.size();i++){
                vect[i]=mul/nums[i];
            }
        }
        return vect;
    }
};