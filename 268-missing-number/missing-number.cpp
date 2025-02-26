class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1 =0, x2 = 0;
        for(int i=0; i<nums.size(); i++){
            x1 = x1 ^ (i+1);
            x2 = x2^ nums[i];
        }
        return x1^x2;
    }
};