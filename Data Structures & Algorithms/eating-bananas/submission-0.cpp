class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = ranges::max(piles);
        int firsttindex = -1;
        while(left<=right){
            int mid = left + (right - left)/2;
            long long total_hours = 0;
            for(int pile: piles){
                total_hours += (pile + mid - 1)/mid;
            }
            if(total_hours >= h){
                right = mid - 1;
            }
            else if(total_hours <h){
                firsttindex = mid;
                left = mid + 1;
            }

        }
        return firsttindex;
    }
};
