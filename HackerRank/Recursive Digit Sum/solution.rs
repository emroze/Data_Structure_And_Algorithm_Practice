use std::env;
use std::fs::File;
use std::io::{self, BufRead, Write};

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

fn superDigit(n: &str, k: i32) -> i32 {
    let mut value = String::from(n);
    let mut multiplier = k as i64;
    loop{
        let mut sum: i64 = 0;
        for i in value.chars() {
            sum = sum + (i.to_digit(10).unwrap() as i64);
        }

        sum = sum * multiplier;
        multiplier = 1;

        if sum<10 {
            return sum as i32;
        }
        value = sum.to_string();
    }
}

fn main() {
    let stdin = io::stdin();
    let mut stdin_iterator = stdin.lock().lines();

    let mut fptr = File::create(env::var("OUTPUT_PATH").unwrap()).unwrap();

    let first_multiple_input: Vec<String> = stdin_iterator.next().unwrap().unwrap()
        .split(' ')
        .map(|s| s.to_string())
        .collect();

    let n = &first_multiple_input[0];

    let k = first_multiple_input[1].trim().parse::<i32>().unwrap();

    let result = superDigit(n, k);

    writeln!(&mut fptr, "{}", result).ok();
}

