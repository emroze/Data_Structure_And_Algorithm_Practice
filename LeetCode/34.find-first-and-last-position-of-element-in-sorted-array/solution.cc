class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> r{-1,-1};
        
        for(int i=0;i<size(nums);i++){
            if(target==nums[i]){
                r[0]=i;
                for(;i<size(nums);i++){
                    if(target==nums[i]) r[1]=i;
                }
                return r;
            }
        }
        return r;
    }
};
