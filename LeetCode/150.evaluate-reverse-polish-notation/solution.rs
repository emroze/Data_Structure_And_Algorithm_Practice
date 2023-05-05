impl Solution {
    pub fn eval_rpn(tokens: Vec<String>) -> i32 {
    let mut stack:Vec<i32> = vec![];
    for i in tokens{
        // let mut val:i32 = 0;
        match i.as_str() {
            "+" => {let val = stack.pop().unwrap_or(0) + stack.pop().unwrap_or(0); stack.push(val)}, 
            "-" => {
                let val1 = stack.pop().unwrap_or(0);
                let val2 = stack.pop().unwrap_or(0); 
                stack.push(val2-val1)
            }
            "*" => {let val = stack.pop().unwrap_or(0) * stack.pop().unwrap_or(0); stack.push(val)},
            "/" => {
                let divisor = stack.pop().unwrap_or(1);
                let dividend = stack.pop().unwrap_or(0); 
                stack.push(dividend / divisor);
            },
            _ => {
                let val:i32 = i.parse().unwrap();
                stack.push(val);
            },
        }
    }
    return stack.pop().unwrap_or(0);
    }
}
