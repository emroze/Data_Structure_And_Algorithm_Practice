class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1; 
        
        while(left<right){
            int pivot = left + (right-left)/2;
            
            if(target==nums[pivot]) return pivot;
            
            if(target>nums[pivot]) left=pivot+1;
            if(target<nums[pivot]) right=pivot-1;
        } 
        if(target < nums[left] || target==nums[left]) return left;
        return left+1;
    }
};
