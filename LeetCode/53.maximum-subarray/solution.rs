impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        let mut max = nums[0];
        let mut curSum = 0;
        for i in nums{
            if curSum < 0 {
                curSum=0;
            }
            curSum += i;
            max = std::cmp::max(max, curSum);

        }
        return max;
    }
}
