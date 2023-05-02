impl Solution {
    pub fn is_valid(s: String) -> bool {
    let mut stack:Vec<char>=vec![];
    
    for i in s.chars().rev(){

        match i {
            ')' | '}' | ']' => {stack.push(i);},
            '(' => {if !stack.is_empty() && *stack.last().unwrap()==')' {stack.pop();} else {stack.push(i);}},
            '{' => {if !stack.is_empty() && *stack.last().unwrap()=='}' {stack.pop();} else {stack.push(i);}},
            '[' => {if !stack.is_empty() && *stack.last().unwrap()==']' {stack.pop();} else {stack.push(i);}},
            _ => stack.push(i),
        }

    }
    stack.is_empty()
    }
}
