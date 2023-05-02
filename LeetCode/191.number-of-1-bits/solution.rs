impl Solution {
    pub fn hammingWeight (n: u32) -> i32 {
    let divisor = 2;
    let mut dividend = n;
    let mut remainder = dividend%2;
    let mut quotient = 1;
    let mut count = 0;
    while quotient>0 {
        remainder = dividend%divisor;
        if remainder==1 {count += 1};
        quotient = dividend/2;
        dividend /= divisor;
        
    }
    return count;
    }
}
