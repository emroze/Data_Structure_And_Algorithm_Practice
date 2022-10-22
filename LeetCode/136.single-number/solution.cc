class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.end()-nums.begin();
        sort(nums.begin(),nums.end());
        int i;                                                                                                 if(n==1) return nums[0];                                                                               for(i=0;i<n-1;i++){                                                                                               if(i<n-2) {                                                                                                     if(nums[i]==nums[i+1]) i++;                                                                             else if(nums[i]!=nums[i+1]) return nums[i];                                           } 
     }
        return nums[i]; 
    }
};
