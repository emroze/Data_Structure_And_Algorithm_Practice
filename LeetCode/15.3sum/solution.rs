impl Solution {
    pub fn three_sum(nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut nums_copy:Vec<i32> = nums;
        let mut result: Vec<Vec<i32>> = vec![];
        nums_copy.sort_unstable();
        let mut i:usize = 0;
        while i<nums_copy.len()-2{
            
            let start:i32 = nums_copy[i];
            let mut left = i+1;
            let mut right = nums_copy.len()-1;
            while left!=right && left<right {
                let sum = nums_copy[left] + nums_copy[right] + start;
                if sum==0 {
                    result.push(vec![start,nums_copy[left],nums_copy[right]]);
                    while left+1<nums_copy.len() && nums_copy[left] == nums_copy[left+1] {
                        left+=1;
                    };
                    left+=1 ;
                }
                if sum > 0 {right-=1;};
                if sum <0 {left+=1;};
                
                
            }
            println!("{i}");
            while i+1<nums_copy.len() && nums_copy[i] == nums_copy[i+1] {
                i+=1;
            };
            
            i+=1;

        }
        
        result
    }
}
