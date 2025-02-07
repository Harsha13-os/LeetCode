class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, zcount=0, maxl=0;
        int n = nums.size();

        while(r<n){
            if(nums[r] == 0) zcount++;

            if(zcount > k){
                if(nums[l] == 0){zcount--;}
                l++;
            }

            if(zcount <= k){
                maxl = max(maxl, r-l+1);
            }
            r++;
        }
        return maxl;
    }
};