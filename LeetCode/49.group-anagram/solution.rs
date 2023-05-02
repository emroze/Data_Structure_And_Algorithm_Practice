fn sort_string(s: &str) -> String {
    let mut temp: Vec<char> = s.chars().collect();
    temp.sort_unstable();
    temp.into_iter().collect()
}

impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        let mut hash_map: std::collections::HashMap<String, Vec<String>> = std::collections::HashMap::new();

        for i in strs.iter() {
            let sorted = sort_string(i);
            hash_map.entry(sorted)
            .or_default()
            .push(i.to_string());
        }

        let mut result:Vec<Vec<String>> = hash_map
        .iter()
        .map(|(_,v)| v.into_iter().cloned().collect())
        .collect();

        return result
    }
}
