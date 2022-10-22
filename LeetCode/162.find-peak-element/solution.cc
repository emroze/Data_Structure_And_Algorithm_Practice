class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(size(nums)==1) return 0;
        for(int i=1;i<size(nums)-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i;
        }
        if(nums[0]>nums[1]) return 0;
        if(nums[size(nums)-1]>nums[size(nums)-2]) return size(nums)-1;
        return 0;
    }
};
