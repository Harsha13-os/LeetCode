class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev =nums[0], prev_2=0;
        for(int i=1; i<n; i++){
            int take = nums[i];
            if(i>1) take+=prev_2;
            int notTake = prev;
            int curr = max(take,notTake);
            prev_2 = prev;
            prev = curr; 
        }
        return prev;
    }
};