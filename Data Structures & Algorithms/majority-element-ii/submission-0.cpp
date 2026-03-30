class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0; i<n; i++){
            int num = nums[i];
            mp[num]++;
        }
        vector<int>res;
        for(auto i = mp.begin(); i!= mp.end();i++){
            if(i->second > nums.size()/3){
                res.push_back(i->first);
            }
        }
        return res;
    }
};