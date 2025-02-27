class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsets = 1<<n;
        vector<vector<int>> ans;
        for(int i=0; i<subsets; i++){
            vector<int> ans1;
            for(int j=0; j<n; j++){
                if(i&(1<<j)) ans1.push_back(nums[j]);
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};