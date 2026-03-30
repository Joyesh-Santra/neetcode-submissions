class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>prefixsum;
        int res = 0;
        int csum = 0;
        prefixsum[0] = 1;
        for(int i = 0; i<n; i++){
            csum += nums[i] ;
            int diff = csum - k;
            res += prefixsum[diff];
            prefixsum[csum]++;
        }
        return res;
    }
};