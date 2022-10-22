class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                max = std::max(max,count);
                count = 0;
                continue;
            }

            else count++;
        }
        return std::max(max,count);
    }
};
