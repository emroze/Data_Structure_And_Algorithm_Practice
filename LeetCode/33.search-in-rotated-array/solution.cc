class Solution {
public:
    int search(vector<int>& nums, int target) {
       if(target>=nums[0]){
           for(int i=0;i<size(nums);i++){
               if(target==nums[i]) return i;
           }
       }
        else{
            for(int i=size(nums)-1;i>=0;i--){
                if(target==nums[i]) return i;
            }
        }
    return -1;
    }
};
