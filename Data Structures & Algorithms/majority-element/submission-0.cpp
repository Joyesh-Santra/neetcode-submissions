class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>count;
        int n = nums.size();
        int res = 0; int max_count =0;
        for(int i = 0; i<n;i++){
            int num = nums[i];
            count[num]++;
            if(count[num] > max_count){
                res = num;
                max_count = count[num];
            }
        }
        return res;
        
    }
};