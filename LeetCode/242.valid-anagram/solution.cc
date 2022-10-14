class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false; //If both are not of same size return false
        std::unordered_map <char, int> map;
        
        for (int i=0;i<s.size();i++){
            map[s[i]]++;        //increase count for the element s[i]
            map[t[i]]--;        //decrease count for the element t[i]
        }
        
        for (auto count: map){
            if(count.second) return false; //if a count is not zero, return zero
        }
        return true;
        
    }
};