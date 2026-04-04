class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid] > nums[r]){
                l = mid + 1;
            }
            else if(nums[mid] < nums[r]){
                r = mid;
            }
            else{
                r--;
            }
        }
        int pivot = l;
        l = 0;
        r = nums.size()-1;
        if(target >= nums[pivot] and target <=nums[r]){
            l = pivot;
        }
        else{
            r = pivot - 1;
        }
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                return true;
            }
            else if(nums[m] > target){
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return false;
    }
};