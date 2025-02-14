class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return fun(nums, k) - fun(nums, k-1);
    }

    int fun(vector<int>& nums, int k){
        int l=0, r=0, n=nums.size();
        int count=0,sum=0;
        while(r<n){
            sum += (nums[r]%2);
            while(sum>k){
                sum -= (nums[l]%2);
                l = l+1;
            }
            count = count + (r-l+1);
            r++; 
        }
        return count;
    }
};