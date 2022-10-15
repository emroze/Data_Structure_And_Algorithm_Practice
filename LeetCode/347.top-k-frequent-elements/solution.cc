class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> map_count;
        for(int i=0;i<nums.size();i++){
            map_count[nums[i]]++;
        }
        
        vector<pair<int,int>> pair;
        for (auto it: map_count){
            pair.emplace_back(-(it.second),it.first);
        }
        nth_element(pair.begin(),pair.begin()+k-1,pair.end());
        
        vector<int> output;
        for(int i=0;i<k;i++){
            output.emplace_back(pair[i].second);
        }
        
        return output;
    }

};