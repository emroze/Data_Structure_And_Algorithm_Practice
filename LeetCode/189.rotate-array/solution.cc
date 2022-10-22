class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int rotate = k%nums.size();
        std::cout << rotate;
        if(rotate!=0){
            vector<int> n(rotate);
            for(int i=0;i<rotate;i++){
                n[i] = nums[nums.size()-rotate+i];      
            }
            for(int i=0;i<nums.size()-rotate;i++){
                nums[nums.size()-1-i]=nums[nums.size()-1-i-rotate];
            }
            for(int i=0;i<rotate;i++){
                nums[i]=n[i];
            }
        }
        
        
    }
};
