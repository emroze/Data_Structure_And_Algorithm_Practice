class Solution {
public:
    int search(vector<int>& nums, int target) {
        return bin_search(nums,0,nums.size()-1,target);
    }
    
    int bin_search(vector<int> nums,int left,int right,int target){
        //std::cout << left << " " << right<< "\n" ;
        if(left==right){
            if(nums[left]==target) return left;
        }
        if(nums[(left+right)/2]==target && left<right) return (left+right)/2;
        if(target<nums[(left+right)/2] && left<right) return bin_search(nums, left, ((left+right)/2)-1,target);
        if(target>nums[(left+right)/2] && left<right) return bin_search(nums,((left+right)/2)+1,right,target);  
        return -1;
    }
};
