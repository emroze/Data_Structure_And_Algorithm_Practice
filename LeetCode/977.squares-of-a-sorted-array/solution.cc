class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<size(nums);i++) nums[i]=nums[i]*nums[i];
        
        std::sort(nums.begin(),nums.end());
        
        return nums;
    }
};
