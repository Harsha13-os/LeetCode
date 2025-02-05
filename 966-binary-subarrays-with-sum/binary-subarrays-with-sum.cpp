class Solution {
public:
    int fun(vector<int>& nums, int goal){
        if( goal<0) return 0;
        int count = 0;
        int l=0, r=0, sum = 0;
        int n = nums.size();
        while(r<n){
            sum = sum + nums[r];
            while(sum>goal){
                sum = sum - nums[l];
                l = l+1;
            }
            count = count+ (r-l+1);
            r++;
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return fun(nums, goal)-fun(nums, goal-1);
    }
};