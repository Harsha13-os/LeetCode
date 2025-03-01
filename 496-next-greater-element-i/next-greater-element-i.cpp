class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack <int> st1,st2;
        for(auto i:nums2){
            st1.push(i);
        }
        
        for(int i=0; i<nums1.size(); i++){
            st2 = st1;
            int x=0;
            while(nums1[i] != st2.top()){
                if(nums1[i]<st2.top()){
                    x = st2.top();
                }
                st2.pop();
            }
            if(nums1[i]<x) ans.push_back(x);
            else ans.push_back(-1);
        }
        return ans;
    }
};