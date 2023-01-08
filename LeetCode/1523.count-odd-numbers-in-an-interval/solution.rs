impl Solution {
    pub fn count_odds(low: i32, high: i32) -> i32 {
        let mut ret = 0;
        if (low%2==0) && (high%2==0) {
            ret = (high - low)/2;
        }
        else{
            ret = (high-low)/2+1;
        }
        ret
    }
}
