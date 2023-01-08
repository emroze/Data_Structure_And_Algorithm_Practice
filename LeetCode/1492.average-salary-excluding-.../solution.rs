impl Solution {
    pub fn average(salary: Vec<i32>) -> f64 {
        let mut salary = salary;
        salary.sort();
        salary.remove(0);
        salary.pop();
        let sum: f64 = f64::from(salary.iter().sum::<i32>());
        let divisor: f64 = salary.len() as f64;
        sum/divisor
    }
}
