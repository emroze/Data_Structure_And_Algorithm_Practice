impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut left = 0;
        let mut right = 1;
        if prices.iter().count()<2 {
            return 0;
        }
        let mut max_profit = prices[right] - prices[left];
        while right<(prices.iter().count()-1) {
            if prices[left] > prices[right]{
                left = right;
            }
            right += 1;
            if (prices[right]-prices[left]) > max_profit{
                max_profit = prices[right]-prices[left];
            }
        }
        if max_profit<0 {
            return 0;
        }
        max_profit
    }
}
