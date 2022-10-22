class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        map<int,int> num;
        for(int i=0;i< numbers.size();i++){
            int find = target-numbers[i];
            if(num.find(find)!=num.end()){
                ret.push_back(num.find(find)->second);
                ret.push_back(i+1);
                return ret;
            }
            num.insert({numbers[i],i+1});
        }
        return ret;
    }
};
