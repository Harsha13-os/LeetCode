class Solution {
    public int removeDuplicates(int[] nums) {
        int count = 0;
        int n = nums.length;
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]) continue;
            else{
                nums[++count] = nums[i];
            }
        }
        return count+1;
    }
}