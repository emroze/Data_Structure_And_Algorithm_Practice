class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = size(nums);
        int tmp = INT_MAX, start = 0, end = len-1, mid = len/2;
        if(start==end) return nums[start];
        if(nums[start]<nums[end]) return nums[start];
        while(true){
            if(nums[mid]>nums[start]) start = mid;
            if(nums[mid]<nums[end]) end = mid;
            mid = start+(end-start)/2;
            if((end-1)==start) return nums[end];
        }
        return 0;
    }
};
