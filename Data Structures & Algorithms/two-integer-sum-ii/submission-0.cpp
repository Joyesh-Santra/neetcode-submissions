class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>prev;
        int n = numbers.size();
        for(int i = 0; i<n; i++){
            int diff = target - numbers[i];
            if (prev.find(diff) != prev.end()){
                return{prev[diff]+1,i+1};
            }
            prev.insert({numbers[i],i});
        }
        return {};
    }
};
