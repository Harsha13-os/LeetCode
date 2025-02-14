class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun(nums,k)-fun(nums,k-1);
    }
    
    int fun(vector<int>& nums, int k){
        int l=0, r=0, n=nums.size();
        int count=0;
        unordered_map<int, int> mpp;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l = l+1;
            }
            count = count + (r-l+1);
            r++; 
        }
        return count;
    }
};