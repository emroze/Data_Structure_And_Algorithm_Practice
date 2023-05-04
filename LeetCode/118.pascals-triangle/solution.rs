impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut result:Vec<Vec<i32>> = vec![];
        for i in 0..num_rows as usize{
            match i {
                0 => result.push(vec![1]),
                1 => result.push(vec![1,1]),
                _ => {
                    let mut now:Vec<i32> = vec![];
                    now.push(1);
                    for j in 0..result[i-1].len()-1{
                        now.push(result[i-1][j]+result[i-1][j+1]);
                    }
                    now.push(1);
                    result.push(now);
                }
            }
        }
        return result;
    }
}
