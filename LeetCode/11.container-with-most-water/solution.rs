
impl Solution {
    pub fn max_area(height: Vec<i32>) -> i32 {
        let mut left = 0;
        let mut right = height.len()-1;
        let mut max_area:i32 = 0;
        while left<right {
            let area:i32 = (std::cmp::min(height[right],height[left]))*((right-left) as i32);
            max_area = std::cmp::max(max_area,area);
            if height[left] < height[right] {
                left = left + 1;
            }
            else {
                right = right - 1;
            }
        }
        max_area
    }
}
