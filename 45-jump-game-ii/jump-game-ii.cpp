class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0; 

    int jumps = 0, cur_end = 0, cur_farthest = 0;

    for (int i = 0; i < n - 1; i++) {
        cur_farthest = max(cur_farthest, i + nums[i]);

        if (i == cur_end) { 
            jumps++;
            cur_end = cur_farthest;

            if (cur_end >= n - 1) break; 
        }
    }

    return jumps;
    }
};