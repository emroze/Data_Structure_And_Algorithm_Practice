impl Solution {
    pub fn merge(nums1: &mut Vec<i32>, m: i32, nums2: &mut Vec<i32>, n: i32) {
        let zero_to_remove:i32 = nums1.len() as i32+nums2.len() as i32 - m -n;
        let mut zero_removed = 0;
        nums1.append(nums2);

        nums1.sort_unstable();

        nums1.retain(|&x| {
            if x == 0 && zero_removed < zero_to_remove {
                zero_removed += 1;
                false
            } else {
                true
            }
        })
        
        
    }
}
