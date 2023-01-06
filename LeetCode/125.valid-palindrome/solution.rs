impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        let iterator = s.chars().filter(|c| c.is_alphanumeric()).map(|c| c.to_ascii_lowercase());

        iterator.clone().eq(iterator.rev())
    }
}
