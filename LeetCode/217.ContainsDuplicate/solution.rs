impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hash_map = std::collections::HashMap::new();
        hash_map.insert(nums[0],1);
        for i in nums[1..].iter(){
            let result:bool = match hash_map.get(&i){
                Some(data) => true,
                None => {
                    hash_map.insert(*i,1);
                    false
                }
            };
            if result{
                return true;
            }
        }
        return false;
    }
}